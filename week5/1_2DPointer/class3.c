#include <stdio.h>

// 2차원 배열이름 대상의 포인터 연산 결과
int main() {
	int iarr1[5][2];
	int iarr2[2][5];

	printf("%p\n", iarr1); // iarr의 첫 번째 요소의 주소값
	printf("%p\n", iarr1 + 1); // iarr의 두 번째 요소의 주소값, iarr1[0] 주소값 + 4
	printf("%p\n", iarr2); // iarr2의 첫 번째 요소의 주소값
	printf("%p\n", iarr2 + 1); // iarr2의 두 번째 요소의 주소값, iarr2[0] 주소값 + 4

	return 0;
}