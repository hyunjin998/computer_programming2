#include <stdio.h>
void Question();


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.268
			char str[20];
			printf("string: ");
			scanf_s("%s", str, 20); // ���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� ����
			
			int idx;
			for (idx = 0; str[idx] != '\0'; idx++) { // �Է� ���� ���ܾ��� ���̸� ����� ���

			}
			printf("%d\n", idx);
			break;
		}

		case 2: { // p.268
			char str[20];
			printf("string: ");
			scanf_s("%s", str, 20); // ���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char�� �迭�� ����

			int len;
			for (len = 0; str[len] != '\0'; len++) { // �Է� ���� ���ܾ��� ���̸� ����� ���

			}
		
			// �迭�� ����� ���ܾ �������� ������
			// �� ������ ��ġ ���� ����
			// for (int i = 0; i < len - 1 - i; i++) {
			for (int i = 0; i < len / 2; i++){
				int tmp;
				tmp = str[len - 1 - i];
				str[len - 1 - i] = str[i];
				str[i] = tmp;
			}

			printf("reverse: %s\n", str); // ����� ���������� Ȯ�� ���
			break;
		}

		case 3: { // p.268
			char str[20];
			printf("string: ");
			scanf_s("%s", str, 20); // ���α׷� ����ڷκ��� ���ܾ �Է� ����

			// �Է� ���� ���ܾ �����ϴ� ���� �߿���
			// �ƽ�Ű �ڵ� ���� ���� ū ���ڸ� ã�Ƴ���
			int big = str[0];
			for (int i = 0; str[i + 1] != '\0'; i++)
				(big < str[i + 1] ? big = str[i + 1] : big);

			printf("%c\n", big); // ���
			break;
		}
		}
	}
}


void Question() {
	printf("===============================\n");
	printf("1. string length\n");
	printf("2. string reverse\n");
	printf("3. biggest character\n");
	printf("==============================\n");
	printf("Select option: ");
}