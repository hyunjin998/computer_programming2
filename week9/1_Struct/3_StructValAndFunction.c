#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos) {
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}


Point GetCurrentPosition() {
	Point cen;
	printf("Input current pos: ");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}


int main() {
	
	// 함수가 반환하는 값으로 구조체 변수 curPos를 초기화
	// 변수 cen의 멤버에 저장된 값은 변수 curPos의 멤버에 나란히 저장(복사)
	Point curPos = GetCurrentPosition();

	// 함수를 호출하면서 변수 curPos를 인자로 전달
	ShowPosition(curPos);
	return 0;
}