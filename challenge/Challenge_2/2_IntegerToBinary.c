/* ���α׷� ����ڷκ��� 10���� ���·� ������ �ϳ� �Է� ���� ����,
�̸� 2������ ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��� ����.

(���� ��)
10���� ���� �Է�: 12
1100
*/

#include <stdio.h>
void IntToBinary(int *a);


int main() {
	int num;
	printf("10���� ���� �Է�: ");
	scanf_s("%d", &num); // 10���� ���� �Է� ����
	IntToBinary(&num);
	return 0;
}

void IntToBinary(int *a) { // 2������ ��ȯ�� ����ϴ� ���α׷�
	int quo = *a; // quotient
	int remain[8]; // remainder, 10�����̱� ������ �迭�� ũ��� 8
	int cnt = 0;

	for (int i = 0; quo != 0; i++) {
		remain[i] = quo % 2;
		quo /= 2;
		cnt++;
	}

	for (int j = 0; j < cnt; cnt--) {
		printf("%d", remain[cnt - 1]);
	}
	printf("\n");
}