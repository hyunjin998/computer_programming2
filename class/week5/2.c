/* �迭 A�� �迭 B�� �����մϴ�.
�迭A�� ����� ���ÿ� ���� ǥ�� �ִ´�� �ʱ�ȭ�� �մϴ�.

�迭 A
1 2 3 4
5 6 7 8

�׸��� �迭 B�� �迭 A�� ����� ���� ��� ���� �ٲپ(tranpose) ���� �־��ݴϴ�.
��, �迭 B�� 4�� 2��¥�� �迭�Դϴ�.

�迭 B
1 5
2 6
3 7
4 8
*/


#include <stdio.h>

int main() {
	int a[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 }; // �迭 A ����� ���ÿ� �ʱ�ȭ
	int b[4][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			b[j][i] = a[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}