#include <stdio.h>

// 3. �����͸� �迭�� �̸�ó�� ����� �� �ִ�.
int main() {
	int a[4] = { 100, 200, 300, 400 };
	int* p = &a[0]; // int *p = a; �� ���� ����
	printf("a[0] p[0]: %d %d\n", a[0], p[0]); // 100 100
	printf("a[0] p[0]: %d %d\n", a[1], p[1]); // 200 200
	printf("a[0] p[0]: %d %d\n", a[2], p[2]); // 300 300
	printf("a[0] p[0]: %d %d\n", a[3], p[3]); // 400 400

	return 0;
}