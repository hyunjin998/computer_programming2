#include <stdio.h>

// 4. 포인터 연산
int main() {
	int a[4] = { 100, 200, 300, 400 };
	
	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3);
	p++;
	printf("%p\n", p);

	*(a + 1) += 100;
	printf("*a: %d\n", *(a + 1));

}