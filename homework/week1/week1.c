#include <stdio.h>
void Question();
float CmToM(float a); // 1
double Add(float a, float b); // 2
float Avg(float a, float b); // 2
double AddAvg(float a, float b, char c); // 3
int OneToNum(int a); // 4
int OneToNum_for(int a); // 5 (1)
int OneToNum_recur(int a, int b); // 5 (2)
void Swap(int x, int y); // 8(1)
void pSwap(int* px, int* py); // 8(2)
void pAddAvg(float a, float b); // 9


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			float height;
			printf("height(cm): ");
			scanf_s("%f", &height); // (1) 키를 입력 받음
			printf("%0.2fm\n", CmToM(height)); // (2) 입력 받은 키값을 함수에 넘겨주고, 환산된 키를 반환함
											   // (3) 반환받은 m단위 키 출력
			break;
		}


		case 2: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) 두 개의 실수 입력 받음
			printf("Sum: %0.2lf\nAverage: %0.2f\n", Add(num1, num2), Avg(num1, num2)); // (2) 두 실수의 합을 구하는 함수를 작성하고 호출
																						 // (3) 두 실수의 평균을 구하는 함수를 작성하고 호출
																						 // (4) 결과인 합과 평균 출력
			break;
		}


		case 3: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) 두 개의 실수 입력 받음

			char ch;
			while (1) {
				printf("Input '+' or '#' ('+' == add, '#' == avg): ");
				getchar();
				scanf_s("%c", &ch, 1);
				if (ch == '+' || ch == '#') break;
			}

			printf("%0.2f\n", AddAvg(num1, num2, ch)); // (2) 두 실수와 연산자를 매개변수로 넘김
													   // (3) 결과인 합과 평균 출력
			break;
		}


		case 4: {
			int num;
			printf("num: ");
			scanf_s("%d", &num); // 정수 입력 받음

			printf("%d\n", OneToNum(num)); // 1부터 입력받은 정수까지의 합을 구하는 함수 호출
			break;
		}


		case 5: {
			int num;
			int sum = 0;
			printf("num: ");
			scanf_s("%d", &num); // 정수 입력 받음

			printf("(1)using for: %d\n", OneToNum_for(num)); // (방법1) 반복문 사용
			printf("(2)using recursive: %d\n", OneToNum_recur(num, sum)); // (방법2) 재귀함수 사용
			break;
		}


		case 6: {
			int a = 100;
			int* p = &a; // 포인터 p가 a의 주소값을 가리킴
			*p = 200; // 포인터 p가 가리키는 주소값 안에 값 200을 넣음
			printf("%d\n", a); // a 출력, 200
			printf("%d\n", (*p) + a); // 200 + 200 = 400
			break;
		}


		case 7: {
			int a = 100;
			int* p = &a; // 포인터 p가 a의 주소값을 가리킴
			double* pd; // 더블포인터 pd 선언
			pd = p; // pd와 p의 데이터타입이 달라서 이상한 값을 참조
			printf("%lf\n", *pd); // 쓰레기값 출력
			break;
		}


		case 8: {
			int num1, num2;
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			Swap(num1, num2); // (방법1) 포인터를 사용하지 않고 함수 작성
			pSwap(&num1, &num2); // (방법2) 포인터를 매개변수로 사용해 함수 작성
			break;
		}


		case 9: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) 두 개의 실수를 입력 받음

			pAddAvg(num1, num2); // (2) 두 실수의 합계와 평균을 반환하는 함수 호출 (포인터 사용)
			break;
		}
		}
	}
	return 0;
}



void Question() {
	printf("================================================\n");
	printf("1. cm -> m\n"); // 키를 cm단위로 입력 받아 m단위로 환산해서 출력해주는 프로그램
	printf("2. add, avg using each functions\n"); // 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수를 각각 만들어 호출
	printf("3. add, avg using only one function\n"); // 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개를 만들어 호출
	printf("4. 1 + 2 + ... + num\n"); // 정수를 입력 받아 1부터 입력받은 정수까지의 합을 구하는 함수를 작성해 호출하고 합을 계산한 결과 출력
	printf("5. 1 + 2 + ... + num(2)\n"); // 4번 문제를 (1)반복문 (2)재귀함수 사용
	printf("6. pointer result\n"); // 코드의 실행 결과를 예측해보고, 결과와 일치하는지 확인해보기
	printf("7. pointer result(2)\n"); // 6과 동일
	printf("8. swap(num1, num2)\n"); // 두 변수의 값을 바꾸는 함수를 작성해 호출
	printf("9. add,avg using only one function with pointer\n"); // 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개를 만들어서 호출
	printf("================================================\n");
	printf("Select option: ");
}

float CmToM(float a) { // 1
	return a / 100;
}

double Add(float a, float b) { // 2
	double result; // overflow
	result = a + b;
	return result;
}

float Avg(float a, float b) { // 2
	return Add(a, b) / 2;
}

double AddAvg(float a, float b, char c) { // 3
	double result; // overflow
	result = Add(a, b);

	if (c == '+') return result; // (2) 연산자가 '+'이면 합을 반환하고
	else return result / 2; // (2) '#'이면 평균을 반환
}

int OneToNum(int a) { // 4
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += i; // 1부터 입력받은 정수까지 더함

		if (i % 5 == 0) // (조건1) 5의 배수인 것은 제외
			sum -= i;

		else {
			if (sum >= 1000) { // (조건2) 합이 1000을 넘어가면 더 이상 합하지 않기
				printf("1 + 2 + ... + %d: ", i);
				break;
			}
		}
	}
	return sum; // 합 반환
}

int OneToNum_for(int a) { // 5 (방법1) 반복문 사용
	int sum = 0;
	for (int i = 0; i <= a; i++) // 1부터 입력받은 정수까지의 합을 구함
		sum += i;

	return sum;
}

int OneToNum_recur(int a, int b) { // 5 (방법2) 재귀함수 사용
	b += a;

	if (a == 1) return b;
	else return OneToNum_recur(a - 1, b);
}

void Swap(int x, int y) { // 8 (방법1) 포인터를 사용하지 않고 함수 작성
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf("(1) not using pointer\nnum1: %d, num2: %d\n", x, y);
}

void pSwap(int* px, int* py) { // 8 (방법2) 포인터를 매개변수로 사용해 함수 작성
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
	printf("(2) using pointer\nnum1: %d, num2: %d\n", *px, *py);
}

void pAddAvg(float a, float b) { // 9
	float* pa, * pb;
	pa = &a;
	pb = &b;

	double add; // overflow
	add  = *pa + *pb;
	float avg = add / 2;
	printf("sum: %0.2lf, avg: %0.2f\n", add, avg); // (3) 결과인 합과 평균 출력
}