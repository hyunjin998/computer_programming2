#include <stdio.h>


/* ﻿함수 내에서 포인터 변수 ptr1과 ptr2에 직접 접근하기 위해
이 두 변수에 저장된 값을 서로 바꿔줘야 하고,
이를 위해선 int형 더블 포인터가 매개변수로 선언되어야 한다.
﻿*/


void SwapIntPtr(int** dp1, int** dp2) {
	int* tmp = *dp1;
	*dp1 = *dp2;
	*dp2 = tmp;
}


int main() {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2); // 10 20

	SwapIntPtr(&ptr1, &ptr2); // ptr1과 ptr2의 주소값 전달
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2); // 20 10

	return 0;
}