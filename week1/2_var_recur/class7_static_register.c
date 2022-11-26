#include <stdio.h>

int Calculator(int a);

int main() {
	int a = 1, b = 2; // 지역변수
	int c;

	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c); // a = 1, c = 1
	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c); // a = 1, c = 2
	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c); // a = 1, c = 3

	return 0;
}

int Calculator(int a) {
	static int result = 0;
	// register int result = 0;
	result += a; // result = 1, 2, 3
	return result;
}