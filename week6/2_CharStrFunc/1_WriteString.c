#include <stdio.h>

int main() {
	char* str = "Simple String";


	// puts �Լ��� ȣ��
	// ���ڿ��� ����� ��ġ���� ���ڿ��� �ּ� ���� ��ȯ��Ƿ�, �� ��� ��� ���ڿ��� �ּ� ���� ���޵�
	printf("1. puts test ------\n");
	puts(str); // Simple String
	puts("So Simple String"); // So Simple String

	// fputs �Լ��� ȣ��
	// �� ��° ���ڷ� stdout�� ���޵Ǿ�����, ����ͷ� ����� ��
	// fputs �Լ��� ������ ���� �۾��� �̷������ �ʱ� ������ \n�� �߰�
	printf("2. fputs test -----\n");
	fputs(str, stdout); printf("\n"); // Simple String
	fputs("So Simple String", stdout); printf("\n"); // So Simple string

	printf("3. end of main ----\n");
	return 0;
}