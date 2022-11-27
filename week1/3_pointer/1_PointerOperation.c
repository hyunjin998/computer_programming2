#include <stdio.h>

int main() {
	int num1 = 100, num2 = 100;
	int* pnum; // int형 변수의 주소 값을 저장하는 포인터 변수 pnum 선언

	pnum = &num1; // 포인터 pnum이 num1을 가리킴
	(*pnum) += 30; // num1 + 30

	pnum = &num2; // 포인터 변수 pnum이 가리키는 대상을 num2로 변경. 저장된 값의 변경 가능
	(*pnum) -= 30; // num2 - 30

	printf("num1: %d, num2: %d\n", num1, num2); // num1: 130, num2: 70
	return 0;
}