/* 2�� n���� ���ϴ� �Լ��� ��������� ������ ����.
�׸��� �׿� ���� ������ main�Լ��� ������ ����.

(���� ��)
�����Է�: 8
2�� 8���� 256
*/

#include <stdio.h>
int SquareRecursive(int a); // 2�� n���� ���ϴ� ����Լ�


int main() {
	int num;
	printf("�����Է�: ");
	scanf_s("%d", &num);

	printf("2�� %d���� %d\n", num, SquareRecursive(num));
	return 0;
}


int result = 2;
int SquareRecursive(int a) { // 2�� n���� ���ϴ� ����Լ�
	if (a == 1) return result;
	else {
		result *= 2;
		return SquareRecursive(a - 1);
	}
}