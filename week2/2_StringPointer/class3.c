#include <stdio.h>

// 7. �迭 ������
// �迭�� ����Ű�� ������, �������� ����
// int *pa[4]; // �����͸� ���� �迭, �迭�� ����
int main() {
	int arr3[4] = { 1, 2, 3, 4 };
	int(*pa)[4];

	pa = &arr3;
	printf("%d %d %d %d\n", (*pa)[0], (*pa)[1], (*pa)[2], (*pa)[3]); // 1 2 3 4

	char arr4[4][8] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	char(*ps)[8];

	ps = arr4;
	for (int i = 0; i < 4; i++) {
		printf("%s\n", *ps++); // SPRING\n SUMMER\n FALL\n WINTER\n
	}

	return 0;
}