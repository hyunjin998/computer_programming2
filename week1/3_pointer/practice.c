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
			int num1 = 10, num2 = 20; // int�� ���� num1�� num2�� ����� ���ÿ� ���� 10�� 20���� �ʱ�ȭ
			int* ptr1 = &num1; // int�� ������ ���� ptr1�� num1�� ����Ŵ
			int* ptr2 = &num2; // int�� ������ ���� ptr2�� num2�� ����Ŵ

			(*ptr1) += 10; // ������ ���� ptr1�� �̿��� num1�� ���� 10 ����, num1 = 20
			(*ptr2) -= 10; // ������ ���� ptr2�� �̿��� num2�� ���� 10 ����, num2 = 10
			
			ptr1 = &num2; // ������ ���� ptr1�� num2�� ����Ű���� ����
			ptr2 = &num1; // ������ ���� ptr2�� num1�� ����Ű���� ����

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