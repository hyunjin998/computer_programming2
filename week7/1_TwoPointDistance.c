#include <stdio.h>
#include <math.h>

struct point { // ����ü point�� ����
	int xpos;
	int ypos;
};


int main() {
	struct point pos1, pos2; // �� ���� ����ü ���� ����
	double distance;

	fputs("point1 pos: ", stdout);
	scanf_s("%d %d", &pos1.xpos, &pos1.ypos); // ����ü ����� ������� & ����

	fputs("point2 pos: ", stdout);
	scanf_s("%d %d", &pos2.xpos, &pos2.ypos); // ����ü ����� ������� & ����

	/* �� ������ �Ÿ� ��� ���� */
	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	printf("�� ���� �Ÿ��� %g �Դϴ�.\n", distance);
	return 0;
}