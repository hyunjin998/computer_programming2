#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};


// 구조체 point 대상의 typedef 선언문
typedef struct point Point;


// typedef 선언이 추가된 형태의 구조체 정의
typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
} Person;


int main() {
	
	// struct 선언 없이 구조체 변수를 선언
	Point pos = { 10, 20 };
	Person man = { "이승기", "010-1212-0001", 21 };
	printf("%d %d\n", pos.xpos, pos.ypos); // 10 20
	printf("%s %s %d\n", man.name, man.phoneNum, man.age); // 이승기 010-1212-0001 21

	return 0;
}