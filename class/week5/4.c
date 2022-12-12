/* 다음과 같이 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언합니다.
int * maxPtr;
int * minPtr;
int arr[5];

그리고 MaxAndMin이란 이름의 함수를 정의하고
이를 호출하면서 위의 배열과 두 포인터 변수에 대한 정보를 전달합니다.
함수 호출이 완료되면 포인터 변수 maxPtr에는 가장 큰 값이 저장된 배열요소의 주소값이,
minPtr에는 가장 작은 값이 저장된 배열요소의 주소값이 저장되어야 합니다.
마지막으로 가장 큰 값, 가장 작은 값을 포인터변수를 이용해 출력하세요.
*/


#include <stdio.h>
void MaxAndMin(int a[], int len, int** c, int** d);

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

void MaxAndMin(int a[], int len, int** c, int** d) {
	for (int i = 0; i < len; i++) {
		if (**c < a[i]) *c = &a[i]; // maxPtr에 가장 큰 값이 저장된 배열요소의 주소 값 저장
		if (**d > a[i]) *d = &a[i]; // minPtr에 가장 작은 값이 저장된 배열요소의 주소 값 저장 
	}

	printf("maxPtr: %p, minPtr: %p\n", *c, *d);
}