#include <stdio.h>

// 2���� �迭�̸� ����� ������ ���� ���
int main() {
	int iarr1[5][2];
	int iarr2[2][5];

	printf("%p\n", iarr1); // iarr�� ù ��° ����� �ּҰ�
	printf("%p\n", iarr1 + 1); // iarr�� �� ��° ����� �ּҰ�, iarr1[0] �ּҰ� + 4
	printf("%p\n", iarr2); // iarr2�� ù ��° ����� �ּҰ�
	printf("%p\n", iarr2 + 1); // iarr2�� �� ��° ����� �ּҰ�, iarr2[0] �ּҰ� + 4

	return 0;
}