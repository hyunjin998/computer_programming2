#include <stdio.h>

int main() {
	int num = 10;
	int* ptr = &num;
	*ptr = 10;

	return 0;
}