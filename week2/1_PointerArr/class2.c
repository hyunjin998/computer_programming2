#include <stdio.h>

// 2. 1���� �迭 �̸��� ������ �� �����ϴ� ���

int main() {
	int a[4] = { 100, 200, 300, 400 };

	printf("*a: %d\n", *a); // 100
	
	*a += 100;
	printf("*a: %d\n", *a); // 200
	printf("a[0]: %d\n", a[0]); // 200

	a[0] -= 100;
	printf("a[0]: %d\n", a[0]); // 100

	*(a + 1) += 100;
	printf("*a: %d\n", *(a + 1)); // 300
	printf("a[1]: %d\n", a[1]); // 300

	return 0;
}