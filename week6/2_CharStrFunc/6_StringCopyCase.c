#include <stdio.h>
#include <string.h>

int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];


	/**** case 1 ****/
	strcpy(str2, str1); // str1�� ���ڿ��� str2�� ����
	puts(str2); // 1234567890


	/**** case 2 ****/
	// str1�� ����� ���ڿ��� str2�� �����ϵ�,
	// str1�� ���̰� �ſ� ��ٸ�, sizeof(str2)�� ��ȯ�� ���� �ش��ϴ� ������ �� ��ŭ�� ���縦 ����
	strncpy(str3, str1, sizeof(str3));
	puts(str3); // 12345����
				// �� ���ڰ� �����ؾ� �� ���� �������� ����ϴµ�
				// �� ���ڰ� �������� �ʾ� ������ �������� ��µ�


	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3); // 1234

	return 0;
}