#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};


int main() {
	struct point arr[3];
	
	for (int i = 0; i < 3; i++) {
		printf("점의 좌표 입력: ");
		// 구조체 배열을 이루는 구조체 변수의 멤버를 대상으로 scanf 함수 호출
		scanf_s("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (int i = 0; i < 3; i++)
		// 구조체 배열을 이루는 구조체 변수에 저장된 값을 출력
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);

	return 0;
}