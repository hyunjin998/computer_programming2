#include <stdio.h>

int main() {
	char str[30];
	int ch;
	
	// simple.txt�� �����ʹ� �ؽ�Ʈ ���󿡼� ����Ǿ����Ƿ�
	// �Է� ��Ʈ���� ������ ���� �ؽ�Ʈ ���� ����
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}


	// �����Ͱ� �Էµ� ������ ���´�� ����
	// ���� �� ���� ���� �а� ���� ���ڿ� �� ���� ����
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
	return 0;
}