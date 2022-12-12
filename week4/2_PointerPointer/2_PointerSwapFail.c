#include <stdio.h>

void SwapIntPtr(int* p1, int* p2) {
	int* tmp = p1;
	p1 = p2;
	p2 = tmp;
}


int main() {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2); // 10 20

	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2); // 10 20

	return 0;
}