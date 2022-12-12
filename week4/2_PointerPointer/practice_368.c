#include <stdio.h>
void MaxAndMin(int a[], int len, int **c, int **d);

int main() {
	// �� ���� int�� ������ ������ ���̰� 5�� int�� �迭 ����
	int* maxPtr;
	int* minPtr;
	int arr[5];

	maxPtr = &arr[0];
	minPtr = &arr[0];
	int arrLen = sizeof(arr) / sizeof(int);

	for (int i = 0; i < arrLen; i++) {
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, arrLen, &maxPtr, &minPtr); // �迭�� �� ������ ���� ����
	return 0;
}

void MaxAndMin(int a[], int len, int **c, int **d) {
	for (int i = 0; i < len; i++) {
		if (**c < a[i]) *c = &a[i]; // maxPtr�� ���� ū ���� ����� �迭����� �ּ� �� ����
		if (**d > a[i]) *d = &a[i]; // minPtr�� ���� ���� ���� ����� �迭����� �ּ� �� ���� 
	}

	printf("maxPtr: %p, minPtr: %p\n", *c, *d);
}