#include <stdio.h>

int main() {
	int ch;
	ch = getchar(); // ����ڷκ��� ���ĺ� ���� �ϳ� �Է� ����, getchar �Լ� ���
	
	if (ch >= 65 && ch < 97) {
		ch += 32; // �빮�ڴ� �ҹ��ڷ� ��ȯ�� ���
		putchar(ch);
	}

	else if (ch >= 97 && ch < 123) {
		ch -= 32; // �ҹ��ڴ� �빮�ڷ� ��ȯ�� ���
		putchar(ch);
	}

	else printf("Put 'a'~'z' or 'A'~'Z'\n");
	return 0;
}