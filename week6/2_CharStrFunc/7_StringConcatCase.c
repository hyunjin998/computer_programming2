#include <stdio.h>
#include <string.h>


int main() {
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";


	/**** case 1 ****/
	// str2�� ����� ���ڿ��� ������ �� ���� ��ŭ�� ����� ������ str1�� �־�� ��
	strcat(str1, str2);
	puts(str1); // First~Second


	/**** case2 ****/
	// str4�� ����� ���ڿ��� str3�� ����� ���ڿ��� �ڿ� �����̵� 7���� ���ڸ� �����δ�.
	// ���� �� ���ڸ� ������ 8���� ���ڰ� ���ٿ�����.
	strncat(str3, str4, 7);
	puts(str3); // Simple num: 1234567
	return 0;
}