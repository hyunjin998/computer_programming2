#include <stdio.h>

int main() {
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, 50); // ���ڿ��� �Է� �޾Ƽ� �迭 str�� ����, str �տ� &������ �������� ����
	printf("�Է� ���� ���ڿ�: %s\n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0') { // scanf �Լ�ȣ���� ���� �Է� ���� ���ڿ��� �P���� �ι��ڰ� ���Ե� ����
							   // C���� ǥ���ϴ� ��� ���ڿ��� ������ �� ���ڰ� �ڵ����� ���Ե�
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	
	return 0;
}