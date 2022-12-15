#include <stdio.h>


struct point {
	int xpos;
	int ypos;
};


struct circle {
	double radius;
	struct point* center; // 포인터 변수도 구조체의 멤버가 될 수 있음
};


int main() {
	struct point cen = { 2, 7 };
	double rad = 5.5;


	// 구조체 변수 ring의 멤버 center가 구조체 변수 cen을 가리키는 형태가 됨
	struct circle ring = { rad, &cen };
	printf("원의 반지름: %g\n", ring.radius); // 5.5


	// 구조체 변수 ring의 멤버 center가 포인터 변수이므로
	// ring.center를 대상으로 -> 연산을 해서, 구조체 변수 cen의 멤버에 접근
	printf("원의 중심 [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos); // [2, 7]

	return 0;
}