#include <stdio.h>

// ������ ������ ����� ������ ���� �������̴�.
int main() {
	int iarr[3]; // iarr�� int�� ������
	double darr[3]; // darr�� double�� ������

	printf("%p\n", iarr); // iarr�� ù ��° ����� �ּҰ�
	printf("%p\n", iarr + 1); // iarr�� �� ��° ����� �ּҰ�, iarr[0] �ּҰ� + 4
	printf("%p\n", darr); // darr�� ù ��° ����� �ּҰ�
	printf("%p\n", darr + 1); // darr�� �� ��° ����� �ּҰ�, darr[0] �ּҰ� + 4

	return 0;
}