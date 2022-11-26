#include <stdio.h>

void Calculator(int a, int b);
int c; // 전역변수, c = 0

int main() {
	int a = 1, b = 2; // 지역변수
	Calculator(a, b);

	printf("a + b = c\n"); // a + b = c
	printf("%d + %d = %d\n", a, b, c); // 1 + 2 = 3
	return 0;
}

void Calculator(int a, int b) {
	c = a + b; // c = 1 + 2
	return;
}