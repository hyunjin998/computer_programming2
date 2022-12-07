#include <stdio.h>
void Question();
int SquareByValue(int a); // CallByValue
int SquareByReference(int *a); // CallByReference
void Swap3(int *a, int *b, int *c);


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.320
			int num;
			printf("num: ");
			scanf_s("%d", &num);

			printf("CallByValue: %d\n", SquareByValue(num));
			printf("CallByReference: %d\n", SquareByReference(&num));
			break;
		}

		case 2: { // p.320
			int num1, num2, num3;
			printf("num1, num2, num3: ");
			scanf_s("%d %d %d", &num1, &num2, &num3);

			Swap3(&num1, &num2, &num3);
			break;
		}
		}
	}
	return 0;
}



void Question() {
	printf("========================================\n");
	printf("1. CallByValue, CallByReference\n");
	printf("2. num1 = num3, num2 = num1, num3 = num2\n");
	printf("========================================\n");
	printf("Select option: ");
}


// 인자로 전달된 값의 제곱을 반환
int SquareByValue(int a) {
	return a * a;
}


// 정수가 저장되어 있는 변수의 주소 값을 인자로 받아
// 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장
int SquareByReference(int *a) {
	*a *= *a;
	return *a;
}


// 세 변수에 저장된 값을 서로 뒤바꾸는 함수
void Swap3(int* a, int* b, int* c) {
	int tmp = *a;
	*a = *c;
	*c = *b;;
	*b = tmp;

	printf("num1: %d, num2: %d, num3: %d\n", *a, *b, *c);
}