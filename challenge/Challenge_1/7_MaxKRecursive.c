/* ���α׷� ����ڷκ��� ���� n�� �Է� �޴´�.
�׸��� ���� ���� ������ �����ϴ� k�� �ִ��� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
2^k <= n

(���� ��)
��� n �Է�: 256
������ �����ϴ� k�� �ִ��� 8
*/

#include <stdio.h>
int MaxK(int a); // k�� �ִ� ���ϴ� �Լ�


int main() {
	int n;
	printf("��� n �Է�: ");
	scanf_s("%d", &n);
	
	printf("������ �����ϴ� k�� �ִ��� %d\n", MaxK(n));
	return 0;
}


int result = 2;
int k = 0;
int MaxK(int a) { // k�� �ִ� ���ϴ� �Լ�
	if (result > a) return k;
	else {
		result *= 2;
		k++;
		MaxK(a);
	}
}