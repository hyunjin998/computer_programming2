#include <stdio.h>

// 예제 1, 2
void AddFunc(int a, int b) {
	printf("a: %d\nb: %d\na+b:%d\n", a, b, a + b);
}


// 예제 3
void ShowArray(int* a) {
	printf("a: %d\n", a);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}


// 예제 4
void SumArray(int* a, int len) {
	int sum = 0;
	printf("sizeof(a): %d len: %d\n", sizeof(a), len);

	for (int i = 0; i < len; i++) {
		printf("a[%d]: %d ", i, a[i]);
		sum += a[i];
	}
	printf("\n배열 요소의 합은 %d\n", sum);
}


// 예제 5
void ChgArray(int* a, int len, int addNum) {
	for (int i = 0; i < len; i++) {
		a[i] += addNum;
	}
}


// 예제 6 - 함수 선언시, int *a와 int a[]는 같은 표현
void ShowArray2(int a[]) {
	printf("a: %d\n", a);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}


int main() {
	int num1 = 5, num2 = 7;

	// 1. 인자와 전달 - num1와 num2 값을 '복사'해 전달
	printf("=== 예제 1 ===\n");
	AddFunc(num1, num2); // a: 5 b: 7 a+b: 12

	
	// 2. AddFunc() 함수 안에서 값을 증가시킬 경우 - main()함수 안의 값이 바뀌는 것은 아님
	printf("=== 예제 2 ===\n");
	printf("[before]num1: %d num2: %d\n", num1, num2); // num1: 5 num2: 7

	AddFunc(num1, num2); // a: 5 b: 7 a+b: 12
	printf("[after  ]num: %d num2: %d\n", num1, num2); // num1: 5 num2: 7


	// 3. 배열을 함수의 인자로 전달하기
	printf("=== 예제 3 ===\n");
	int arr[4] = { 100, 200, 300, 400 };
	printf("arr: %d\n", arr); // arr의 주소값
	ShowArray(arr); // arr의 주소값
					// 100 200 300 400


	// 4. 배열의 합 구하기
	printf("=== 예제 4 ===\n");
	SumArray(arr, sizeof(arr) / sizeof(int)); // (arr, 4) sizeof(arr) / sizeof(int)는 배열의 크기
											  // sizeof(a): 4 len: 4 sum: 1000
	int arr2[] = { 100, 200, 300, 400, 500 };
	SumArray(arr2, sizeof(arr2) / sizeof(int)); // (arr2, 5)
												// sizeof(a): 4 len: 5 sum: 1500

	int* ptr = arr2;
	SumArray(ptr, sizeof(arr2) / sizeof(int)); // (ptr, 5)
											   // sizeof(a): 4 len: 5 sum: 1500


	// 5. 배열의 값 변경하기
	printf("=== 예제 5 ===\n");
	ChgArray(arr, sizeof(arr) / sizeof(int), 100); // (arr, 4, 100)
	SumArray(arr, sizeof(arr) / sizeof(int)); // (arr, 4)
											  // sizeof(a): 4 len:4
											  // 200 300 400 500 sum: 1400


	// 6. 함수 선언 예시
	printf("=== 예제 6 ===\n");
	ShowArray(arr); // arr의 첫 번째 요소의 주소값\n 200 300 400 500
	ShowArray2(arr); // arr의 첫 번째 요소의 주소값\n 200 300 400 500

	return 0;
}