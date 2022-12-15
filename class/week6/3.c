#include <stdio.h>
void ComplexFuncOne(int** a, int* (*b)[5]);
void ComplexFuncTwo(int*** c, int*** (*d)[5]);


int main() {
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);
	return 0;
}

void ComplexFuncOne(int** a, int* (*b)[5]) {
}

void ComplexFuncTwo(int*** c, int*** (*d)[5]) {
}