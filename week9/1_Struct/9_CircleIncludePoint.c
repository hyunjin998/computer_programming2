#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;


typedef struct circle {
	Point cen;
	double rad;
} Circle;


void ShowCircleInfo(Circle* cptr) {
	printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g\n\n", cptr->rad);
}


int main() {

	// 구조체 변수가 멤버로 존재할 경우
	// 중괄호를 이용해 구조체 멤버의 초기화를 구분 지을 수 있음
	Circle c1 = { {1, 2}, 3.5 };

	// 중괄호를 이용해 구조체 변수의 초기화를 구분 짓지 않으면 순서대로 초기화됨
	// Circle 구조체의 가장 상단에 존재하는 변수는 Point 구조쳋 변수인데,
	// Point 구조체 변수의 첫 번째 멤버는 xpos이니 xpos가 먼저 초기화되고, 이어서 ypos가 초기화됨
	Circle c2 = { 2, 4, 3.9 };
	ShowCircleInfo(&c1); // [1, 2]\n radius: 3.5
	ShowCircleInfo(&c2); // [2, 4]\n radius: 3.9

	return 0;
}