#include <stdio.h>

int main() {
	char str1[] = "My String"; // ���� ������ ���ڿ�
	char* str2 = "Your String"; // ��� ������ ���ڿ�
	printf("%s %s\n", str1, str2); // My String Your String

	str2 = "Our String"; // ����Ű�� ��� ����
	printf("%s %s\n", str1, str2); // My String Our String

	str1[0] = 'X'; // ���ڿ� ���� ����
	str2[0] = 'X'; // ���ڿ� ���� ����

	// �����Ϸ��� ������ ��忡 ����
	// ���α׷��� ����ǰų�
	// ������ ���õǾ� ���ڿ��� ������� ���� ��
	printf("%s %s\n", str1, str2);

	return 0;
}