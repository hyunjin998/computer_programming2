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

	// ����ü ������ ����� ������ ���
	// �߰�ȣ�� �̿��� ����ü ����� �ʱ�ȭ�� ���� ���� �� ����
	Circle c1 = { {1, 2}, 3.5 };

	// �߰�ȣ�� �̿��� ����ü ������ �ʱ�ȭ�� ���� ���� ������ ������� �ʱ�ȭ��
	// Circle ����ü�� ���� ��ܿ� �����ϴ� ������ Point �����m �����ε�,
	// Point ����ü ������ ù ��° ����� xpos�̴� xpos�� ���� �ʱ�ȭ�ǰ�, �̾ ypos�� �ʱ�ȭ��
	Circle c2 = { 2, 4, 3.9 };
	ShowCircleInfo(&c1); // [1, 2]\n radius: 3.5
	ShowCircleInfo(&c2); // [2, 4]\n radius: 3.9

	return 0;
}