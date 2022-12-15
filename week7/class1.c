#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};


int main() {
	struct Person p1; // 구조체 변수 선언

	// 점(.)으로 구조체 멤버에 접근해 값 할당
	strcpy(p1.name, "강감찬");
	p1.age = 20;
	strcpy(p1.address, "천안시 동남구");

	// 점으로 구조체 멤버에 접근해 값 출력
	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}