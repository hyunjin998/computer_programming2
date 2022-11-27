#include <stdio.h>

void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.284
			int num = 10;
			int* ptr1 = &num;
			int* ptr2 = ptr1;

			(*ptr1)++; // 10 + 1
			(*ptr2)++; // 11 + 1
			printf("%d\n", num); // 12

			break;
		}

		case 2: { // p.284
			int num1 = 10, num2 = 20; // int형 변수 num1과 num2를 선언과 동시에 각각 10과 20으로 초기화
			int* ptr1 = &num1; // int형 포인터 변수 ptr1이 num1을 가리킴
			int* ptr2 = &num2; // int형 포인터 변수 ptr2이 num2를 가리킴

			(*ptr1) += 10; // 포인터 변수 ptr1을 이용해 num1의 값을 10 증가, num1 = 20
			(*ptr2) -= 10; // 포인터 변수 ptr2를 이용해 num2의 값을 10 감소, num2 = 10
			
			ptr1 = &num2; // 포인터 변수 ptr1이 num2를 가리키도록 변경
			ptr2 = &num1; // 포인터 변수 ptr2이 num1을 가리키도록 변경

			printf("ptr1: %d, ptr2: %d\n", *ptr1, *ptr2); // ptr1 = num2 = 10, ptr2 = num1 = 20
			
			break;
		}
		}
	}
	return 0;
}

void Question() {
	printf("===============================\n");
	printf("1. Pointer\n");
	printf("2. num1 + 10, num2 - 10, ptr1 <-> ptr2\n");
	printf("==============================\n");
	printf("Select option: ");
}