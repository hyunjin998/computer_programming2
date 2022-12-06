#include <stdio.h>

int main() {
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	// arr1과 arr2가 가리키는 대상을 출력
	// arr1은 int형 포인터이므로 4바이트 크기의 메모리를 정수 형태로 참조,
	// arr2는 double형 포인터이므로 8바이트 크기의 메모리를 실수 형태로 참조
	// 따라서 arr1과 arr2가 가리키는 배열의 첫 번째 요소가 출력됨
	printf("%d %g\n", *arr1, *arr2); // 1 1.1
	
	*arr1 += 100; // arr1이 가리키는 대상의 값을 100 증가
	*arr2 += 120.5; // arr2가 가리키는 대상의 값을 120.5 증가
	printf("%d %g\n", arr1[0], arr2[0]); // 101 121.6

	return 0;
}