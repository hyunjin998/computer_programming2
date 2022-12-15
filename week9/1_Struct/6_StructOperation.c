#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;


int main() {
	Point pos1 = { 1, 2 };
	Point pos2;
	pos2 = pos1; // pos1�� ��� �� pos2�� ����� ���簡 �����

	printf("ũ��: %d\n", sizeof(pos1)); // 8, pos1�� ��ü ũ�� ��ȯ
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos); // [1, 2]
	printf("ũ��: %d\n", sizeof(pos2)); // 8, pos2�� ��ü ũ�� ��ȯ
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos); // [1, 2]
	return 0;
}