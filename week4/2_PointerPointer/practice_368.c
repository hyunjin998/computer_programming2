#include <stdio.h>
void MaxAndMin(int a[], int len, int **c, int **d);

int main() {
	// 두 개의 int형 포인터 변수와 길이가 5인 int형 배열 선언
	int* maxPtr;
	int* minPtr;
	int arr[5];

	maxPtr = &arr[0];
	minPtr = &arr[0];
	int arrLen = sizeof(arr) / sizeof(int);

	for (int i = 0; i < arrLen; i++) {
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, arrLen, &maxPtr, &minPtr); // 배열과 두 포인터 변수 전달
	return 0;
}

void MaxAndMin(int a[], int len, int **c, int **d) {
	for (int i = 0; i < len; i++) {
		if (**c < a[i]) *c = &a[i]; // maxPtr에 가장 큰 값이 저장된 배열요소의 주소 값 저장
		if (**d > a[i]) *d = &a[i]; // minPtr에 가장 작은 값이 저장된 배열요소의 주소 값 저장 
	}

	printf("maxPtr: %p, minPtr: %p\n", *c, *d);
}