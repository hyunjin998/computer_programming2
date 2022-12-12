#include <stdio.h>
void Question();
void Swap(int x, int y); // 1 (1)
void Swap2(int* px, int* py); // 1 (2)
void SumAvg(float *a, float *b); // 2
void Square(int a[], int len); // 4


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			int num1, num2;
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);
			
			Swap(num1, num2); // (1) 포인터를 사용하지 않고 함수 작성
			Swap2(&num1, &num2); // (2) 포인터를 매개변수로 사용해 함수 작성

			break;
		}

		case 2: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) 두 개의 실수를 입력 받음
			
			SumAvg(&num1, &num2);
			break;
		}

		case 3: {

			
			break;
		}

		case 4: {
			int arr[100];
			int arrLen = sizeof(arr) / sizeof(int);

			for (int i = 0; i < arrLen; i++) {
				arr[i] = i + 1; // 1부터 100까지의 정수가 담겨있는 배열
			}
			
			Square(arr, arrLen); // 배열을 매개변수로 넘겨줌
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("================================================\n");
	printf("1. Swap\n"); // 두 변수의 값을 바꾸는 함수 작성해 호출
	printf("2. Sum, Avgerage\n"); // 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개 만들어 호출
	printf("3. \n");
	printf("4. 2 4 6 ... 100\n"); // 2의 배수 번째 위치해 있는 값만 출력하는 함수 호출
	printf("================================================\n");
	printf("Select option: ");
}


void Swap(int x, int y) { // 1
	int tmp = x;
	x = y;
	y = tmp;
	printf("num1: %d, num2: %d\n", x, y);
}


void Swap2(int* px, int* py) { // 1
	int tmp = *px;
	*px = *py;
	*py = tmp;
	printf("num1: %d, num2: %d\n", *px, *py);
}


// 2. (2) 두 실수의 합계와 평균을 반환하는 함수 작성 (포인터 사용)
void SumAvg(float *a, float *b) {
	long double sum = *a + *b; // overflow
	double avg = sum / 2;
	printf("Sum: %.2lf, Avg: %.2lf\n", sum, avg); // (3) 결과인 합과 평균 출력
}


void Square(int a[], int len) { // 4
	int sum = 2;
	for (int i = 0; i < len; i++) {
		if (a[i] == sum) {
			printf("%d ", a[i]);
			sum *= 2;
		}
	}
	printf("\n");
}