#include <stdio.h>

int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 }; // int�� ������ �迭�� ����, ������ �ּҰ����� �ʱ�ȭ

	// �迭��Ұ� ����Ű�� ������ ����� �� ���
	printf("%d\n", *arr[0]); // 10
	printf("%d\n", *arr[1]); // 20
	printf("%d\n", *arr[2]); // 30
	return 0;
}