#include <stdio.h>

int main() {
	int num = 10;
	int* ptr1 = &num;
	int** dptr = &ptr1;
	int* ptr2;
	int* ptr3;

	printf("%d %d %d\n", num, **dptr, *ptr1); // 10 10 10

	ptr2 = *dptr;
	*ptr2 = 20;
	printf("%d %d %d %d\n", num, **dptr, *ptr1, *ptr2); // 20 20 20 20

	ptr3 = ptr1;
	*ptr3 = 30;
	printf("%d %d %d %d %d\n", num, **dptr, *ptr1, *ptr2, *ptr3); // 30 30 30 30 30

	printf("%p %p %p %p %p\n", &num, *dptr, ptr1, ptr2, ptr3); // num의 주소값
	return 0;
}