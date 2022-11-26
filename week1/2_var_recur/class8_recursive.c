#include <stdio.h>

int factorial(int n);

int main() {
	int fact, n;
	printf("Enter any positive integer.");
	scanf_s("%d", &n);
	fact = factorial(n);
	printf("Factorial of %d is %d", n, fact);
}

int factorial(int n) {
	int tmp;
	if (n == 0) return 1;
	else tmp = n * factorial(n - 1);
	return tmp;
}