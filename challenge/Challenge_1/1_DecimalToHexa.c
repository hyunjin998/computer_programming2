// 10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해 보자.

#include <stdio.h>

int main() {
	int num;
	printf("decimal digit: ");
	scanf_s("%d", &num); // 10진수 정수를 입력 받음
	printf("hexadecimal: %x\n", num); // 16진수로 출력
	return 0;
}