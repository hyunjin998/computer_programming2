#include <stdio.h>

int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1, ptr2, ptr3 };
	int** dptr = ptrArr; // ptrArr과 dptr의 포인터 형이 일치하므로 대입연산 가능

	printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));// 10 20 30
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2])); // 10 20 30, 포인터 변수도 배열의 이름처럼 사용 가능
	return 0;
}