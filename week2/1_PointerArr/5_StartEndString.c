#include <stdio.h>

int main() {
	char str[50] = "I like C programming";
	printf("string: %s\n", str); // I like C programming

	str[8] = '\0'; // 9��° ��ҿ� �� ���� ����
	printf("string: %s\n", str); // I like C

	str[6] = '\0'; // 7��° ��ҿ� �� ���� ����
	printf("string: %s\n", str); // I like

	str[1] = '\0'; // 2��° ��ҿ� �� ���� ����
	printf("string: %s\n", str); // I

	return 0;
}