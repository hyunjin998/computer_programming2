#include <stdio.h>

void SoSimpleFunc() {
	printf("I'm so simple");
}


int main() {
	int num = 20;
	void* ptr;

	ptr = &num; // ���� num�� �ּ� �� ����
	printf("%p\n", ptr);

	ptr = SoSimpleFunc; // �Լ� SoSimpleFunc�� �ּ� �� ����
	printf("%p\n", ptr);

	return 0;
}