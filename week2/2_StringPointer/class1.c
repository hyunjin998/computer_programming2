#include <stdio.h>

// 5. ���ڿ� ǥ��
int main() {
	char str1[] = "HELLO";
	char* str2 = "WORLD"; // ���ڿ� ���ͷ��� �ִ� ���� �ּҸ� ����

	printf("%s %s\n", str1, str2); // HELLO WORLD

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2); // HELLO EVERYONE

	str1[1] = 'A'; // HALLO, ���� CH �ȿ� 'A'�� �״�� �����
	str2[0] = 'A'; // ������ ���� �� ��
	printf("%s %s\n", str1, str2);

	return 0;
}