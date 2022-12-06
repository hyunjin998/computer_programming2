#include <stdio.h>

void SimpleFunc() {
	static int num1 = 0; // 초기화하지 않으면 0으로 자동 초기화
	int num2 = 0; // 초기화하지 않으면 쓰레기값 초기화
	num1++, num2++; // num1 = 1, num2 = 1
	printf("static: %d, local: %d\n", num1, num2); // num1 = 1, num2 = 1
}


int main() {
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc(); // num1 = 1, 2, 3, num2 = 1
	return 0;
}