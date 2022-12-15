#include <stdio.h>

int main() {
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p\n", arr1); // arr1 1행의 첫 번째 요소의 주소값
	printf("arr1+1: %p\n", arr1 + 1); // arr1 2행의 첫 번째 요소의 주소값, arr1 1행의 첫 번째 요소의 주소값 + 8
	printf("arr1+2: %p\n\n", arr1 + 2); // arr1 3행의 첫 번째 요소의 주소값, arr1 2행의 첫 번째 요소의 주소값 + 8

	printf("arr2: %p\n", arr2); // arr2 1행의 첫 번째 요소의 주소값
	printf("arr2+1: %p\n", arr2 + 1); // arr2 2행의 첫 번째 요소의 주소값, arr1 2행의 첫 번째 요소의 주소값 + 12

	return 0;
}