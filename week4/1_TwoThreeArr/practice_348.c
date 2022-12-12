#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.348
			int arr[3][9]; // ������ ���̰� 9, ������ ���̰� 3�� int�� 2���� �迭 ����

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 9; j++) {
					arr[i][j] = (i + 2) * (j + 1); // 2�� 3��, 4��
					printf("%d ", arr[i][j]);
				}
				printf("\n");
			}
			break;
			}


		case 2: { // p.349
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
			break;
		}


		case 3: { // p.349
			int arr[5][5] = { 0 }; // �迭 �̸� ����
			int i, j;


			for (i = 0; i < 4; i++) { // ����, ����, ����, ����
				for (j = 0; j < 4; j++) { // ö��, ö��, ����, ����
					scanf_s("%d", &arr[i][j]); // �̸� ������ ���� �迭�� �� ����
				}
			}


			int row = 0, col = 0; // row, column
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					arr[i][4] += arr[i][j]; // �л� ���
					arr[4][i] += arr[j][i]; // ���� ���
				}
				row += arr[i][4]; // ���κ� ���� ���
				col += arr[4][i]; // ���� ���� ���
			}


			arr[4][4] = (row + col) / 2; // ����
			for (i = 0; i < 5; i++) { // ����, ����, ����, ����
				for (j = 0; j < 5; j++) { // ö��, ö��, ����, ����
					printf("%d ", arr[i][j]);
				}
				printf("\n");
			}
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. GuGuDan\n");
	printf("2. Celsius to Fahrenheit\n");
	printf("3. Fibonacci\n");
	printf("==============================\n");
	printf("Select option: ");
}