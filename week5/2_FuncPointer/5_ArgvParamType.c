#include <stdio.h>

void ShowAllString(int argc, char* argv[]) { // argv�� char�� ���� ������ ����
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}


int main() {
	char* str[3] = { // 1���� �迭�̸��� ������ ���� �迭�̸��� ����Ű�� ����� ���� ����
					 // �迭�̸� str�� ����Ű�� ù ��° ��Ұ� char* �� ������
					 // �迭�̸� str�� ���� char**�̹Ƿ� ShowAllString�� �� ��° ���ڷ� ������ ������
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};

	ShowAllString(3, str);
	return 0;
}