#include <stdio.h>
int Calculator(int a, int b);


int c; // c = 0
int main() {
	int a = 1, b = 2;
	c = Calculator(a, b); // c = 3
	return 0;
}

int Calculator(int a, int b) {
	c = a + b; // c = 1 + 2
	return c;
}