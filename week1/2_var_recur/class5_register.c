#include <stdio.h>

int Calculator(int a);

int main() {
	int a = 1, b = 2;
	int c;
	c = Calculator(a); // c = 1
	return 0;
}

int Calculator(int a) {
	register int result = 0;
	result += a; // result = 1
	return result;
}