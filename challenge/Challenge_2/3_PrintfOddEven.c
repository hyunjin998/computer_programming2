/* ���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޴´�.
��, �Է� ���� ���ڰ� Ȧ���̸� �迭�� �տ������� ä��������,
¦���̸� �ڿ������� ä�������� ������ ���ϱ�� ����.
���� ����ڰ� [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]�� �Է��ߴٸ�,
�迭���� [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]�� ������ ������ �Ǿ�� �Ѵ�.

(���� ��)
�� 10���� ���� �Է�
�Է�: 1
�Է�: 1
�Է�: 4
�Է�: 4
�Է�: 4
�Է�: 4
�Է�: 3
�Է�: 3
�Է�: 2
�Է�: 2
�迭 ����� ���: 1 1 3 3 2 2 4 4 4 4
*/


#include <stdio.h>
void PrintfOddEven(int a[], int len);


int main() {
	int arr[10]; // ���̰� 10�� �迭 ����
	int arrLen = sizeof(arr) / sizeof(int);

	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < arrLen; i++) {
		printf("�Է�: ");
		scanf_s("%d", &arr[i]); // �� 10���� ������ �Է� ����
	}

	PrintfOddEven(arr, arrLen); // (num, 10)
	return 0;
}


void PrintfOddEven(int a[], int len) {
	int param[10];
	int cnt = 0;
	int cnt2 = 1;

	for (int i = 0; i < len; i++) {
		if (a[i] % 2 != 0) { // Ȧ��
			param[cnt] = a[i];
			cnt++;
		}
		else { // ¦��
			param[len - cnt2] = a[i];
			cnt2++;
		}
	}

	printf("�迭 ����� ���: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
}