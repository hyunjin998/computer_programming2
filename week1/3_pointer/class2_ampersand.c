#include <stdio.h>

int main() {
	char ch = 'A';
	int num = 10;
	double dnum = 3.14;

	int* ptr;
	ptr = &num;

	double* dptr;
	dptr = &dnum;

	char* chptr;
	chptr = &ch;

	return 0;
}