#include <stdio.h>

int main() {
	int villa[4][2]; // ������ ���¿� ������ ������ 2���� �迭 ����

	// ������ �����ο� �Է� �ޱ�
	for (int i = 0; i < 4; i++) { // ��ø�� �ݺ����� ���� ������ �α����� �Է� ����
		for (int j = 0; j < 2; j++) {
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j]);
		}
	}

	// ������ ���� �α��� ����ϱ�
	for (int i = 0; i < 4; i++) { // ���� �α����� ����ϱ� ���� �ݺ���
		int popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d�� �α���: %d\n", i + 1, popu);
	}

	return 0;
}