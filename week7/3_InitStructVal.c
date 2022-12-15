#include <stdio.h>


struct point {
	int xpos;
	int ypos;
};


struct person {
	char name[20];
	char phoneNum[20];
	int age;
};


int main() {

	// 중괄호 안에 선언된 값 10과 20은 각각 xpos와 ypos를 초기화함
	struct point pos = { 10, 20 };

	// 구조체 person의 첫 번째, 두 번째 멤버가 char형 배열이기 때문에
	// 두 개의 문자열 선언이 먼저 등장.
	// 그리고 마지막 멤버가 int형 변수이기 때문에 마지막으로 int형 정수가 등장
	struct person man = { "이승기", "010-1212-0001", 21 }; 

	printf("%d %d \n", pos.xpos, pos.ypos); // 10 20
	printf("%s %s %d\n", man.name, man.phoneNum, man.age); // 이승기 010-1212-0001 21

	return 0;
}