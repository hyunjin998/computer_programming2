
// �� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷�

#include <stdio.h>
int NumCompare(int a, int b); // �� �� �� �Լ�
int GCD(int c, int d); // Greatest Common Divisor, �ִ� ����� ���ϴ� �Լ�


int main() {
	int num1, num2;
	printf("Input 2 integer: ");
	scanf_s("%d %d", &num1, &num2); // �� ���� ������ �Է� ����
	
	NumCompare(num1, num2);
	
	return 0;
}


int NumCompare(int a, int b) { // �� �� �� �Լ�
	int min, max;
	if (a < b) {
		min = a;
		max = b;
	}

	else {
		min = b;
		max = a;
	}

	return GCD(min, max); // ������ ��� �Լ�
}


int GCD(int c, int d) {// �ִ� ����� ���ϴ� �Լ�
	int divisor = 1;
	for (int i = 2; i < c + 1; i++)
		if (c % i == 0 && d % i == 0) divisor = i;

	printf("GCD is %d\n", divisor);
}