#include <stdio.h>


struct employee {
	char name[10];
	char id[14];
	int salary;
};


int main() {
	struct employee Employee[3]; // employee 구조체를 기반으로 길이가 3인 배열 선언

	
	// 세 명의 정보를 프로그램 사용자로부터 입력 받아서 배열에 저장
	for (int i = 0; i < 3; i++) {
		printf("name: ");
		scanf_s("%s", Employee[i].name, 20);

		printf("id: ");
		scanf_s("%s", Employee[i].id, 14);

		printf("age: ");
		scanf_s("%d", &(Employee[i].salary));

		printf("\n");
	}

	// 배열에 저장된 데이터를 순서대로 출력
	for (int i = 0; i < 3; i++)
		printf("%s %s %d\n", Employee[i].name, Employee[i].id, Employee[i].salary);
	return 0;
}