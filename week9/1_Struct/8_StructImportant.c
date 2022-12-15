#include <stdio.h>

typedef struct sutdent {
	char name[20]; // 학생 이름
	char stdnum[20]; // 학생 고유번호
	char school[20]; // 학교 이름
	char major[20]; // 선택 전공
	int year; // 학년
} Student;


void ShowStudentInfo(Student* sptr) {
	printf("학생 이름: %s\n", sptr->name);
	printf("학생 고유번호: %s\n", sptr->stdnum);
	printf("학교 이름: %s\n", sptr->school);
	printf("선택 전공: %s\n", sptr->major);
	printf("학년: %d\n", sptr->year);
}

int main() {
	Student arr[7];

	for (int i = 0; i < 7; i++) {
		printf("이름: "); scanf_s("%s", arr[i].name, 20);
		printf("번호: "); scanf_s("%s", arr[i].stdnum, 20);
		printf("학교: "); scanf_s("%s", arr[i].school, 20);
		printf("전공: "); scanf_s("%s", arr[i].major, 20);
		printf("학년: "); scanf_s("%d", &arr[i].year);
		printf("\n");
	}

	for (int i = 0; i < 7; i++) {
		ShowStudentInfo(&arr[i]);
	}
	return 0;
}