#include <stdio.h>
void Add(int val);


int num; // ���������� �⺻ 0���� �ʱ�ȭ�ȴ�
int main() {
	printf("num: %d\n", num); // num = 0
	Add(3);
	printf("num: %d\n", num); // num = 3
	num++; // �������� num�� �� 1 ����
	printf("num: %d\n", num); // num = 4

	return 0;
}

void Add(int val) {
	num += val; // �������� num�� �� val��ŭ ����, num = 3
}