// �� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷�

#include <stdio.h>

int main() {
	int num1, num2;
	printf("Input 2 integer: ");
	scanf_s("%d %d", &num1, &num2); // �� ���� ������ �Է� ����


	// �� ���� ��
	int min, max;
	if (num1 < num2) {
		min = num1;
		max = num2;
	}

	else {
		min = num2;
		max = num1;
	}


	// ������ ���
	int divisor = 1;
	for (int i = 2; i < min + 1; i++)
		if (min % i == 0 && max % i == 0) divisor = i;
	printf("GCD is %d\n", divisor);
	return 0;
}