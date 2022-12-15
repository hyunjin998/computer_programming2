#include <stdio.h>

// 포인터 연산의 결과는 포인터 형에 의존적이다.
int main() {
	int iarr[3]; // iarr은 int형 포인터
	double darr[3]; // darr은 double형 포인터

	printf("%p\n", iarr); // iarr의 첫 번째 요소의 주소값
	printf("%p\n", iarr + 1); // iarr의 두 번째 요소의 주소값, iarr[0] 주소값 + 4
	printf("%p\n", darr); // darr의 첫 번째 요소의 주소값
	printf("%p\n", darr + 1); // darr의 두 번째 요소의 주소값, darr[0] 주소값 + 4

	return 0;
}