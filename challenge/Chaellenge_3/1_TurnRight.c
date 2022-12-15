/* ���̰� 4 * 4�� int�� 2���� �迭�� �����ϰ�, ��� ��Ҹ� �Ʒ� �׸��� ���ʿ� �ִ� ���¿� �����ϰ� �ʱ�ȭ����.
�׸��� �迭�� ��ҵ��� ������ �������� 90���� �̵����Ѽ� �� ����� ����ϴ� ���α׷��� �ۼ��� ����.
����� �迭�� ����Ǵ� ���´� ������ ����.

(��)
 1  2  3  4		13  9  5  1		16 15 14 13		4  8  12 16
 5  6  7  8		14 10  6  2		12 11 10  9		3  7  11 15
 9 10 11 12		15 11  7  3		 8  7  6  5		2  6  10 14
13 14 15 16		16 12  8  4		 4  3  2  1		1  5   9 13
*/


#include <stdio.h>
void Question();
void CurArr(int(*parr)[4], int column);
void PrintfArr(int(*parr2)[4], int column);


int main() {
	int arr[4][4];
	printf("�⺻ �迭�� ����\n");
	CurArr(arr, sizeof(arr) / sizeof(arr[0]));

	while (1) {
		Question();

		int num, cnt = 1;
		scanf_s("%d", &num);

		switch (num) {
		case 1: {
			for (int j = 3; j >= 0; j--){
				for (int i = 0; i < 4; i++)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 2: {
			for (int i = 3; i >= 0; i--) {
				for (int j = 3; j >= 0; j--)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 3: {
			for (int j = 0; j < 4; j++) {
				for (int i = 3; i >= 0; i--)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 4: {
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 5: break;
		}
	}
	return 0;
}


void Question() {
	printf("==============================\n");
	printf("�⺻ �迭���� � ȸ���Ͻðڽ��ϱ�?\n");
	printf("1. ���������� 90�� ȸ��\n");
	printf("2. ���������� 180�� ȸ��\n");
	printf("3. ���������� 270�� ȸ��\n");
	printf("4. ���������� 360�� ȸ��\n");
	printf("5. ����\n");
	printf("==============================\n");
	printf("Select option: ");
}

void CurArr(int(*parr)[4], int column) {
	int cnt = 1;
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++)
			parr[i][j] = cnt++;
	}
	PrintfArr(parr, 4);
}


void PrintfArr(int(*parr2)[4], int column) {
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", parr2[i][j]);
		printf("\n");
	}
}