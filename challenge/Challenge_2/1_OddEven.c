/* ���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޾Ƽ�,
Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ��� ����.
�ϴ� Ȧ������ ����ϰ� ���� ¦���� ����ϵ��� ����.

��, 10���� ������ main �Լ� ������ �Է� �޵��� �ϰ�,
�迭 ���� �����ϴ� Ȧ���� ����ϴ� �Լ���
�迭 ���� �����ϴ� ¦���� ����ϴ� �Լ��� ���� �����ؼ�
�� �� �Լ��� ȣ���ϴ� ������� ���α׷��� �ϼ�����.

(���� ��)
�� 10���� ���� �Է�
�Է�: 1
�Է�: 2
...
Ȧ�� ���: 1, 3, 5, 7, 9
¦�� ���: 2, 4, 6, 8, 10
*/

#include <stdio.h>
void Odd(int *a, int len);
void Even(int *b, int len);


int main() {
	int num[10]; // ���̰� 10�� �迭 ����
	int numLen = sizeof(num) / sizeof(int);

	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < numLen; i++) {
		printf("�Է�: ");
		scanf_s("%d", &num[i]); // main �Լ� ������ �� 10���� ������ �Է� ����
	}

	// Ȧ�� ���� ���
	Odd(num, numLen);
	Even(num, numLen);

	return 0;
}


// Ȧ���� ����ϴ� �Լ�
void Odd(int *a, int len) {
	printf("Ȧ�� ���: ");
	for (int i = 0; i < len; i++) {
		if (a[i] % 2 != 0) {
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

// ¦���� ����ϴ� �Լ�
void Even(int *b, int len) {
	printf("¦�� ���: ");
	for (int i = 0; i < len; i++) {
		if (b[i] % 2 == 0) {
			printf("%d, ", b[i]);
		}
	}
	printf("\n");
}