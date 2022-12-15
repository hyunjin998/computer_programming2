#include <stdio.h>


struct point {
	int xpos;
	int ypos;
};


int main() {
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1; // 포인터 변수 pptr이 구조체 변수 pos1을 가리킴


	// 현재 pptr이 pos1을 가리키므로, 여기서 진행하는 모든 연산은 pos1을 대상으로 함
	(*pptr).xpos += 4; // 5
	(*pptr).ypos += 5; // 7
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos); // [5, 7]


	// 포인터 변수 pptr이 구조체 변수 pos2를 가리킴
	pptr = &pos2;


	// 현재 pptr이 pos2를 가리키므로, 여기서 진행하는 모든 연산은 pos2를 대상으로 함
	pptr->xpos += 1; // 101
	pptr->ypos += 2; // 202
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos); // [101, 202]

	return 0;
}