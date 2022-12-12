#include <stdio.h>

int main() {
	int num = 10;
	int* ptr = &num;
	int** dptr = &ptr;

	printf("num: %d\n", num); // 10
	printf("ptr: %d\n", *ptr); // 10
	printf("dptr: %d\n", **dptr); // 10

	return 0;
}