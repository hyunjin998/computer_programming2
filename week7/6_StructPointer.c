#include <stdio.h>


struct point {
	int xpos;
	int ypos;
};


int main() {
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1; // ������ ���� pptr�� ����ü ���� pos1�� ����Ŵ


	// ���� pptr�� pos1�� ����Ű�Ƿ�, ���⼭ �����ϴ� ��� ������ pos1�� ������� ��
	(*pptr).xpos += 4; // 5
	(*pptr).ypos += 5; // 7
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos); // [5, 7]


	// ������ ���� pptr�� ����ü ���� pos2�� ����Ŵ
	pptr = &pos2;


	// ���� pptr�� pos2�� ����Ű�Ƿ�, ���⼭ �����ϴ� ��� ������ pos2�� ������� ��
	pptr->xpos += 1; // 101
	pptr->ypos += 2; // 202
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos); // [101, 202]

	return 0;
}