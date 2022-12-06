#include <stdio.h>

void printResult(int a, int b, int c) {
	printf("a: %d, b: %d, c: %d\n", a, b, c);
}

int Calculator(int a, int b) {
	int result = a - b;
	return result;
}

int Compare(int a, int b) {
	int diff;

	if (a > b) diff = a - b;
	else diff = b - a;
	return diff; // diff = difference
}


int main() {
	int a, b;
	int c;

	a = 3;
	b = 5;

	c = Calculator(a, b); // c = -2, not print
	printResult(a, b, c); // a: 3, b: 5, c: -2

	c = Compare(5, 3); // c = 2, not print
	printResult(a, b, c); // a: 3, b: 5, c: 2

	/*
	c = a - b;
	printResult(a, b, c);
	c = a * b;
	printResult(a, b, c);
	c = a / b;
	printResult(a, b, c);
	*/
	return 0;
}