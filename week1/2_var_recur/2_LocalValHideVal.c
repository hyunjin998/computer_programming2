#include <stdio.h>
int main() {
	int num = 1;

	if (num == 1) {
		// int num = 7;
		// �ּ�ó�� �� ���: if num = 11, main num = 11
		// �ּ�ó�� �� �� ���: if num = 17, main num = 1
		num += 10;
		printf("if�� �� �������� num: %d\n", num);
	}

	printf("main �Լ� �� �������� num: %d\n", num);
	return 0;
}
