#include <stdio.h>
void Question();

// (3) 함수포인터를 선언하고 연산 선택에 따라 함수포인터로 다른 함수를 호출
int answer(int x, int y, int (*cmp)(int n1, int n2));

// (1) 두 수를 받아 1.합, 2.차, 3.곱, 4.둘 중 큰 값, 5.둘 중 작은 값을 반환하는 5개의 함수
int sum(int x, int y); // 1
int sub(int x, int y); // 2
int mul(int x, int y); // 3
int max(int x, int y); // 4
int min(int x, int y); // 5


int main() {
	while (1) { // (2) 반복 실행
		Question();
		int opt;
		scanf_s("%d", &opt);

		int num1, num2;
		int result;

		switch (opt) {
		case 0: return; // (2) 0을 입력하면 종료, quit

		case 1: { // sum
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2); // (2) 두 정수를 입력 받음

			result = answer(num1, num2, sum);
			printf("%d + %d = %d\n", num1, num2, result); // (4) 메인함수에서 결과 출력
			break;
		}

		case 2: { // subtraction
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, sub);
			printf("%d - %d = %d\n", num1, num2, result);
			break;
		}

		case 3: { // multiply
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, mul);
			printf("%d * %d = %d\n", num1, num2, result);
			break;
		}

		case 4: { // maxNum
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, max);
			printf("MaxNum: %d\n", result);
			break;
		}

		case 5: { // minNum
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, min);
			printf("MinNum: %d\n", result);
			break;
		}
		}
	}
	return 0;
}


void Question() { // (2) 어떤 연사능ㄹ 할 것인지 선택
	printf("===========================\n");
	printf("0. quit\n");
	printf("1. sum\n");
	printf("2. subtraction\n");
	printf("3. multiply\n");
	printf("4. maxNum\n");
	printf("5. minNum\n");
	printf("===========================\n");
	printf("Select option: ");
}

int answer(int x, int y, int (*cmp)(int n1, int n2)) {
	return cmp(x, y);
}

int sum(int x, int y) { // 1
	return x + y;
}

int sub(int x, int y) { // 2
	return x - y;
}

int mul(int x, int y) { // 3
	return x * y;
}

int max(int x, int y) { // 4
	return (x > y) ? x : y;
}

int min(int x, int y) { // 5
	return (x < y) ? x : y;
}