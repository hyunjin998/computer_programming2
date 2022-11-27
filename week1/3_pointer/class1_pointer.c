#include <stdio.h>

int main() {
	char ch = 'A';
	int num = 10;
	double dnum = 3.14;

	int* ptr;
	ptr = &num;

	printf("%d %p %d\n", num, ptr, sizeof(ptr)); // 10, ptr의 주소 값, 8
	return 0;
}