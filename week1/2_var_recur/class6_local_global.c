#include <stdio.h>

void Calculator(int a, int b);
int c; // ��������, c = 0

int main() {
	int a = 1, b = 2; // ��������
	Calculator(a, b);

	printf("a + b = c\n"); // a + b = c
	printf("%d + %d = %d\n", a, b, c); // 1 + 2 = 3
	return 0;
}

void Calculator(int a, int b) {
	c = a + b; // c = 1 + 2
	return;
}