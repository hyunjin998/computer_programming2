#include <stdio.h>

void SimpleFunc() {
	static int num1 = 0; // �ʱ�ȭ���� ������ 0���� �ڵ� �ʱ�ȭ
	int num2 = 0; // �ʱ�ȭ���� ������ �����Ⱚ �ʱ�ȭ
	num1++, num2++; // num1 = 1, num2 = 1
	printf("static: %d, local: %d\n", num1, num2); // num1 = 1, num2 = 1
}


int main() {
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc(); // num1 = 1, 2, 3, num2 = 1
	return 0;
}