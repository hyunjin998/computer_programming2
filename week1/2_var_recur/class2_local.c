#include <stdio.h>

int main() {
	int cnt; // ��������
	int num = 0;

	for (cnt = 0; cnt < 3; cnt++) {
		int num = 0; // ��������
		num++;
		printf("%d��° �ݺ�, �������� num�� %d\n", cnt + 1, num);
	}

	if (cnt == 3) {
		int num = 7; // ��������
		num++;
		printf("if�� ���� �����ϴ� �������� num�� %d\n", num); // num = 8
	}

	num = 10;
	printf("num�� %d\n", num); // num = 10

	return 0;
}