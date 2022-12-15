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
	struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1212-0001", 21 };

	printf("%p %p\n", &pos, &pos.xpos); // 구조체 변수 struct point의 첫 번째 주소값
	printf("%p %p\n", &man, man.name); // 구조체 변수 struct person의 첫 번째 주소값

	return 0;
}