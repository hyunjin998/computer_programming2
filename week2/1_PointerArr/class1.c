#include <stdio.h>

// 1. �迭 �̸��� �ǹ�
// �迭�� ���� �κ��� ����Ű�� �ּ�

int main() {
	int a[4] = { 100, 200, 300, 400 };
	printf("�迭�� �̸� a: %p\n", a); // a[0]�� �ּҰ�

	printf("&a[0] %p\n", &a[0]); // a[0]�� �ּҰ�
	printf("&a[1] %p\n", &a[1]); // a[1]�� �ּҰ�
	printf("&a[2] %p\n", &a[2]); // a[2]�� �ּҰ�
	printf("&a[3] %p\n", &a[3]); // a[3]�� �ּҰ�

	// �Ʒ��� ���� ����ϸ� ����
	// a = &a[0];
	return 0;
}