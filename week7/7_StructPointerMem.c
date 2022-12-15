#include <stdio.h>


struct point {
	int xpos;
	int ypos;
};


struct circle {
	double radius;
	struct point* center; // ������ ������ ����ü�� ����� �� �� ����
};


int main() {
	struct point cen = { 2, 7 };
	double rad = 5.5;


	// ����ü ���� ring�� ��� center�� ����ü ���� cen�� ����Ű�� ���°� ��
	struct circle ring = { rad, &cen };
	printf("���� ������: %g\n", ring.radius); // 5.5


	// ����ü ���� ring�� ��� center�� ������ �����̹Ƿ�
	// ring.center�� ������� -> ������ �ؼ�, ����ü ���� cen�� ����� ����
	printf("���� �߽� [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos); // [2, 7]

	return 0;
}