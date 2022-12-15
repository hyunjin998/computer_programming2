#include <stdio.h>

typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UNIT;
typedef unsigned int* PTR_UNIT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main() {
	INT num1 = 120; // int num1 = 120;
	PTR_INT pnum1 = &num1; // int *pnum1 = &num1;

	UNIT num2 = 190; // unsigned int num2 = 190;
	PTR_UNIT pnum2 = &num2; // unsigned int *pnum2 = &num2;

	UCHAR ch = 'Z'; // unsigned char ch = 'Z';
	PTR_UCHAR pch = &ch; // unsigned char *pch = &ch;

	printf("%d, %u, %c\n", *pnum1, *pnum2, *pch); // 120, 190, Z
	return 0;
}