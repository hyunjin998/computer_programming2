#include <stdio.h>

int main() {
	int arr2d[3][3];
	printf("%d\n", arr2d); // arr2d 1행의 첫 번째 요소의 주소값
	printf("%d\n", arr2d[0]); // arr2d 1행의 첫 번째 요소의 주소값
	printf("%d\n\n", &arr2d[0][0]); // arr2d 1행의 첫 번째 요소의 주소값

	printf("%d\n", arr2d[1]); // arr2d 2행의 첫 번째 요소의 주소값, arr2d 1행의 첫 번째 요소의 주소값 + 12
	printf("%d\n\n", &arr2d[1][0]); // arr2d 2행의 첫 번째 요소의 주소값

	printf("%d\n", arr2d[2]); // arr2d 3행의 첫 번째 요소의 주소값, arr2d 2행의 첫 번재 요소의 주소값 + 12
	printf("%d\n\n", &arr2d[2][0]); // arr2d 3행의 첫 번째 요소의 주소값


	// 배열이름 arr2d를 대상으로 sizeof 연산을 하는 경우 배열 전체의 크기를 반환
	printf("sizeof(arr2d): %d\n", sizeof(arr2d)); // 36

	// arr2d[0], arr2d[1], arr2d[2]를 대상으로 sizeof 연산을 하는 경우 각 행의 크기를 반환
	printf("sizeof(arr2d[0]): %d\n", sizeof(arr2d[0])); // 12
	printf("sizeof(arr2d[1]): %d\n", sizeof(arr2d[1])); // 12
	printf("sizeof(arr2d[2]): %d\n", sizeof(arr2d[2])); // 12

	return 0;
}