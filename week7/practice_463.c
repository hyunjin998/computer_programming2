#include <stdio.h>


struct employee {
	char name[10];
	char id[14];
	int salary;
};


int main() {
	struct employee Employee[3]; // employee ����ü�� ������� ���̰� 3�� �迭 ����

	
	// �� ���� ������ ���α׷� ����ڷκ��� �Է� �޾Ƽ� �迭�� ����
	for (int i = 0; i < 3; i++) {
		printf("name: ");
		scanf_s("%s", Employee[i].name, 20);

		printf("id: ");
		scanf_s("%s", Employee[i].id, 14);

		printf("age: ");
		scanf_s("%d", &(Employee[i].salary));

		printf("\n");
	}

	// �迭�� ����� �����͸� ������� ���
	for (int i = 0; i < 3; i++)
		printf("%s %s %d\n", Employee[i].name, Employee[i].id, Employee[i].salary);
	return 0;
}