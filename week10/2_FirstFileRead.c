#include <stdio.h>

int main() {
	int ch, i;

	// fopen �Լ��� �� ��° ���ڷ� rt�� �����Ͽ�����,
	// ���� data.txt�� ����� �����͸� �б� ���� ��Ʈ���� �����ȴ�.
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	// �� ���� ���ڸ� �о ���
	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c\n", ch);
	}
	fclose(fp);

	return 0;
}