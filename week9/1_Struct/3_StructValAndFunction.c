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
	
	// �Լ��� ��ȯ�ϴ� ������ ����ü ���� curPos�� �ʱ�ȭ
	// ���� cen�� ����� ����� ���� ���� curPos�� ����� ������ ����(����)
	Point curPos = GetCurrentPosition();

	// �Լ��� ȣ���ϸ鼭 ���� curPos�� ���ڷ� ����
	ShowPosition(curPos);
	return 0;
}