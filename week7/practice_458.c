#include <stdio.h>

// ����� ������ '������ �̸�'�� ���ڿ� ������ '�ֹε�Ϲ�ȣ'
// �׸��� ���� ������ '�޿�����'�� ������ �� �ִ� employee��� �̸��� ����ü�� ����
struct employee {
	char name[10];
	char id[14];
	int salary;
};



int main() {
	struct employee Employee; // employee ����ü ���� �ϳ��� ����


	// ���α׷� ����ڰ� �Է��ϴ� ������ ������ ä��
	printf("name: ");
	scanf_s("%s", Employee.name, 20);

	printf("id: ");
	scanf_s("%s", Employee.id, 14);

	printf("age: ");
	scanf_s("%d", &(Employee.salary));

	// ����ü ������ ä���� ������ ���
	printf("%s %s %d\n", Employee.name, Employee.id, Employee.salary);
	return 0;
}