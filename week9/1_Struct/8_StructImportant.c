#include <stdio.h>

typedef struct sutdent {
	char name[20]; // �л� �̸�
	char stdnum[20]; // �л� ������ȣ
	char school[20]; // �б� �̸�
	char major[20]; // ���� ����
	int year; // �г�
} Student;


void ShowStudentInfo(Student* sptr) {
	printf("�л� �̸�: %s\n", sptr->name);
	printf("�л� ������ȣ: %s\n", sptr->stdnum);
	printf("�б� �̸�: %s\n", sptr->school);
	printf("���� ����: %s\n", sptr->major);
	printf("�г�: %d\n", sptr->year);
}

int main() {
	Student arr[7];

	for (int i = 0; i < 7; i++) {
		printf("�̸�: "); scanf_s("%s", arr[i].name, 20);
		printf("��ȣ: "); scanf_s("%s", arr[i].stdnum, 20);
		printf("�б�: "); scanf_s("%s", arr[i].school, 20);
		printf("����: "); scanf_s("%s", arr[i].major, 20);
		printf("�г�: "); scanf_s("%d", &arr[i].year);
		printf("\n");
	}

	for (int i = 0; i < 7; i++) {
		ShowStudentInfo(&arr[i]);
	}
	return 0;
}