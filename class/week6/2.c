#include <stdio.h>
void SimpleFuncOne(int* a, int* b);
void SimpleFuncTwo(int(*c)[4], int(*d)[4]);

int main() {
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
	return 0;
}

void SimpleFuncOne(int* a, int* b) {
}

void SimpleFuncTwo(int(*c)[4], int(*d)[4]) {
}