#include <stdio.h>

int main() {

	// ���� src.txt�� �б� ����, ���� dst.txt�� ���� ���� ����
	// src.txt�� ������ dst.txt��� �̸��� ������ �����ؼ� �����ϱ� ����
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");

	int ch;

	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����!\n");
		return -1;
	}

	// ������ ������ �� ���徿 ����
	// fgetc �Լ��� EOF�� ��ȯ�� ������ ��ӵǴµ�,
	// fgetc �Լ���  ������ ���� �����ؼ� �� �̻� ���� �����Ͱ� ���ų�
	// ������ �߻��ϴ� ��쿡 EOF�� ��ȯ
	while ((ch = fgetc(src)) != EOF) fputc(ch, des);


	// ������ �߻��ϴ� ��쿡�� EOF�� ��ȯ�Ǳ� ������
	// fgetc �Լ��� EOF�� ��ȯ�ߴٰ� �ؼ� ������ ������ ���� ������ ���� �ƴ�
	if (feof(src) != 0) puts("���Ϻ��� �Ϸ�!");
	else puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);

	return 0;
}