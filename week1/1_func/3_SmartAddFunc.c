#include <stdio.h>

int Add(int num1, int num2) { // �������� O, ��ȯ�� O
	return num1 + num2;
}

void ShowAddResult(int num) { // �������� O, ��ȯ�� X
	printf("������� ���: %d\n", num);
}

int ReadNum() { // �������� X, ��ȯ�� O
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg() { // �������� X, ��ȯ�� X
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���.\n");
}

int main() {
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum(); // not print
	num2 = ReadNum(); // not print
	result = Add(num1, num2); // not print
	ShowAddResult(result);

	return 0;
}