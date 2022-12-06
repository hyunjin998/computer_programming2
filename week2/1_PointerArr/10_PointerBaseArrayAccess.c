#include <stdio.h>

int main() {
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr; // int * ptr = &arr[0]; 과 같은 문장
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // 11 22 33

	printf("%d ", *ptr); ptr++; // 11 printf 함수호출 후, ptr++ 실행
	printf("%d ", *ptr); ptr++; // 22
	printf("%d ", *ptr); ptr--; // 33 printf 함수호출 후, ptr-- 실행
	printf("%d ", *ptr); ptr--; // 22
	printf("%d ", *ptr); // 11
	printf("\n");

	return 0;
}