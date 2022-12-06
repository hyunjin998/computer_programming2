#include <stdio.h>
int Calculator(int a, int b);


int main() {
	int a = 1, b = 2;
	int c;
	c = Calculator(a, b); // c = 3
	return 0;
}

int Calculator(int a, int b) {
	int result = a + b; // result = 1 + 2
	return result;
}