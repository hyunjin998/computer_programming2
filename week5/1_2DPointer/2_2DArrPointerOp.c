#include <stdio.h>

int main() {
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p\n", arr1); // arr1 1���� ù ��° ����� �ּҰ�
	printf("arr1+1: %p\n", arr1 + 1); // arr1 2���� ù ��° ����� �ּҰ�, arr1 1���� ù ��° ����� �ּҰ� + 8
	printf("arr1+2: %p\n\n", arr1 + 2); // arr1 3���� ù ��° ����� �ּҰ�, arr1 2���� ù ��° ����� �ּҰ� + 8

	printf("arr2: %p\n", arr2); // arr2 1���� ù ��° ����� �ּҰ�
	printf("arr2+1: %p\n", arr2 + 1); // arr2 2���� ù ��° ����� �ּҰ�, arr1 2���� ù ��° ����� �ּҰ� + 12

	return 0;
}