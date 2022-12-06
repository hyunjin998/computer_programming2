#include <stdio.h>

// 4. 포인터 연산
int main() {
	int a[4] = { 100, 200, 300, 400 };
	int* p = &a[0];

	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3); // p[0]의 주소값 p[1]의 주소값 p[2]의 주소값 p[3]의 주소값
	p++; // p[1]=
	printf("%p\n", p); // p[1]의 주소값

	*(a + 1) += 100; // 300
	printf("*a: %d\n", *(a + 1)); // 300
	printf("a[1]: %d\n", a[1]); // 300
	p--; // p[0]
	printf("%d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3)); // 100 300 300 400

	return 0;
}