#include <stdio.h>

int main() {
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ��: %d\n", sizeof(arr1)); // 4 * 5 = 20
	printf("�迭 arr2�� ũ��: %d\n", sizeof(arr2)); // 4 * 7 = 28
	printf("�迭 arr3�� ũ��: %d\n", sizeof(arr3)); // 4 * 5 = 20

	ar1Len = sizeof(arr1) / sizeof(int); // �迭 arr1�� ���� ���, 20 / 4 = 5
	ar2Len = sizeof(arr2) / sizeof(int); // �迭 arr2�� ���� ���, 28 / 4 = 7
	ar3Len = sizeof(arr3) / sizeof(int); // �迭 arr3�� ���� ���, 20 / 4 = 5

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]); // 1 2 3 4 5
	printf("\n");

	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]); // 1 2 3 4 5 6 7
	printf("\n");

	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]); // 1 2 0 0 0
	printf("\n");

	return 0;
}