/* ���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ�,
�̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��� ����.

(���� ��)
��(second) �Է�: 3615
[h:1, m:0, s:15]
*/

#include <stdio.h>
void Time(int a); // �Է� ���� ��(second)�� [��, ��, ��]�� ���·� ����ϴ� �Լ�


int main() {
	int sec;
	printf("��(second) �Է�: ");
	scanf_s("%d", &sec);

	Time(sec);
	return 0;
}


void Time(int a) { // �Է� ���� ��(second)�� [��, ��, ��]�� ���·� ����ϴ� �Լ�
	int hour, minute;

	hour = a / 60 / 60;
	minute = (a - hour * 60 * 60) / 60;
	a -= hour * 60 * 60 + minute * 60;

	printf("[h:%d, m:%d, s:%d\n", hour, minute, a);
}