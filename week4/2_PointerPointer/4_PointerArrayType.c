#include <stdio.h>

int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1, ptr2, ptr3 };
	int** dptr = ptrArr; // ptrArr�� dptr�� ������ ���� ��ġ�ϹǷ� ���Կ��� ����

	printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));// 10 20 30
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2])); // 10 20 30, ������ ������ �迭�� �̸�ó�� ��� ����
	return 0;
}