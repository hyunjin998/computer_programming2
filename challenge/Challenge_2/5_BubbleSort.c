/* �迭�� ����Ǿ� �ִ� ��ҵ��� ������������ �����ϴ� �Լ��� ��������.
(�Լ��� �̸��� DesSort�� ��������.)
�׸��� �� �Լ����� ȣ���ϴ� ������ �ۼ��غ���.

���α׷��� �帧�� ������ ���� ������ ����.
�ϴ� ���̰� 7�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� 7���� ������ �Է� �޵��� ����.
�׸��� �Է� ���� ������ ������������ �����ϱ� ���ؼ�,
�迭�� ���ڷ� �����ϸ鼭 DesSort �Լ��� ȣ������.
�׸��� ���������� ����� �����̵Ǿ����� Ȯ���ϱ� ���ؼ� �迭�� ��ҵ��� ������� ����غ���.

(���� ��)
�Է�: 1
�Է�: 2
...
�Է�: 7
7 6 5 4 3 2 1
*/

#include <stdio.h>
void DesSort(int *a, int len);


int main() {
	int num[7]; // ���̰� 7�� int�� �迭 ����
	int numLen = sizeof(num) / sizeof(int);

	for (int i = 0; i < numLen; i++) {
		printf("�Է�: ");
		scanf_s("%d", &num[i]); // 7���� ������ �Է� ����
	}

	DesSort(num, numLen);
	return 0;
}


void DesSort(int *a, int len) {
	int tmp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}