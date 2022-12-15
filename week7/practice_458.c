#include <stdio.h>

// 문장려 형태의 '종업원 이름'과 문자열 형태의 '주민등록번호'
// 그리고 정수 형태의 '급여정보'를 저장할 수 있는 employee라는 이름의 구조체를 정의
struct employee {
	char name[10];
	char id[14];
	int salary;
};



int main() {
	struct employee Employee; // employee 구조체 변수 하나를 선언


	// 프로그램 사용자가 입력하는 정보로 변수를 채움
	printf("name: ");
	scanf_s("%s", Employee.name, 20);

	printf("id: ");
	scanf_s("%s", Employee.id, 14);

	printf("age: ");
	scanf_s("%d", &(Employee.salary));

	// 구조체 변수에 채워진 데이터 출력
	printf("%s %s %d\n", Employee.name, Employee.id, Employee.salary);
	return 0;
}