#include <stdio.h>

int main() {
	int* arr1[5];
	int* arr2[3][5];

	int** parr1 = arr1;
	int(*parr2)[5] = arr2;
	return 0;
}