/* �� ������ ����� ���� ���� �ڹٲٴ� �Լ��� ������ ����.
���� �� �Լ��� �̸��� Swap3�̶�� �ϸ�, ������ ���·� �Լ��� ȣ��Ǿ�� �Ѵ�.

Swap3(&num1, &num2, &num3);

�׸��� �Լ� ȣ���� ����� num1�� ����� ���� num2��,
num2�� ����� ���� num3��,
�׸��� num3�� ����� ���� num1�� ����Ǿ�� �Ѵ�.
*/

#include <stdio.h>
void Swap3(int* a, int* b, int* c);


int main() {
	int num1, num2, num3;
	printf("num1, num2, num3: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	return 0;
}


// �� ������ ����� ���� ���� �ڹٲٴ� �Լ�
void Swap3(int* a, int* b, int* c) {
	int tmp = *a;
	*a = *c;
	*c = *b;;
	*b = tmp;

	printf("num1: %d, num2: %d, num3: %d\n", *a, *b, *c);
}