#include <stdio.h>

int main() {
	int num1 = 100, num2 = 100;
	int* pnum; // int�� ������ �ּ� ���� �����ϴ� ������ ���� pnum ����

	pnum = &num1; // ������ pnum�� num1�� ����Ŵ
	(*pnum) += 30; // num1 + 30

	pnum = &num2; // ������ ���� pnum�� ����Ű�� ����� num2�� ����. ����� ���� ���� ����
	(*pnum) -= 30; // num2 - 30

	printf("num1: %d, num2: %d\n", num1, num2); // num1: 130, num2: 70
	return 0;
}