#include <stdio.h>

typedef union ubox { // ����ü ubox ����
	int mem1;
	int mem2;
	double mem3;
} UBox;


int main() {
	UBox ubx; // 8����Ʈ �޸� �Ҵ�
	ubx.mem1 = 20; // ���� 4����Ʈ�� �޸� ������ 20 ����

	// mem2�� int�� �����̹Ƿ� �� �̸����� ������ ���
	// ���� 4����Ʈ�� �޸� ������ �����ϰ� ������
	// �ռ� �� ������ 20�� ���������Ƿ� 20 ���
	printf("%d\n", ubx.mem2); // 20

	// mem3�� �Ǽ��� ����, ����� �� �����
	ubx.mem3 = 7.15;

	// ���������� ���� 4����Ʈ�� �о� �� �� ���� ���� ��µ�
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%d\n", ubx.mem3); // 7.15
	
	return 0;
}