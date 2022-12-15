#include <stdio.h>
#include <string.h>

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main() {
	struct person man1, man2; // 구조체 변수 둘을 선언

	// name과 phoneNum이 배열이기 때문에 문자열 저장을 위해 strcpy 함수를 호출
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	// 배열의 이름 앞에는 &연산자를 붙이지 않고, int형 변수의 이름 앞에 & 연산자를 붙임
	printf("이름 입력:  "); scanf_s("%s", man2.name);
	printf("번호 입력:  "); scanf_s("%s", man2.phoneNum);
	printf("나이 입력:  "); scanf_s("%d", &(man2.age));

	printf("이름: %s\n", man1.name);
	printf("번호: %s\n", man1.phoneNum);
	printf("나이: %d\n", man1.age);


	printf("이름: %s\n", man2.name);
	printf("번호: %s\n", man2.phoneNum);
	printf("나이: %d\n", man2.age);

	return 0;
}