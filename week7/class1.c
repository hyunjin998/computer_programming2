#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};


int main() {
	struct Person p1; // ����ü ���� ����

	// ��(.)���� ����ü ����� ������ �� �Ҵ�
	strcpy(p1.name, "������");
	p1.age = 20;
	strcpy(p1.address, "õ�Ƚ� ������");

	// ������ ����ü ����� ������ �� ���
	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);

	return 0;
}