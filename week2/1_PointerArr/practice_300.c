#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.299
			int arr[5] = { 1, 2, 3, 4, 5 }; // ���̰� 5�� int�� �迭 arr�� �����ϰ� 1, 2, 3, 4, 5�� �ʱ�ȭ
			int* ptr = arr; // �� �迭�� ù ��° ��Ҹ� ����Ű�� ������ ���� ptr ����

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5
			
			// ������ ���� ptr�� ����� ���� ������Ű�� ������ ������ �������
			// �迭��ҿ� �����ϸ鼭 ��� �迭����� ���� 2�� ����
			for (int i = 0; i < arrLen; i++) {
				*ptr += 2;

				// ���������� ������ �̷�������� Ȯ��
				printf("ptr[%d]: %d ", i, *ptr);
				printf("arr[%d]: %d\n", i, arr[i]);
				ptr++;
			}
			printf("\n");
			break;
		}

		case 2: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 };
			int* ptr = arr;

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5

			// ������ ���� ptr�� ����� ���� �����Ű�� �ʰ�,
			// ptr�� ������� ���������� ��, �� ����� ��ȯ�Ǵ� �ּ� ���� ����
			// ��� �迭 ��ҿ� ������ ���� 2�� ����
			for (int i = 0; i < arrLen; i++) {

				

				// ���������� ������ �̷�������� Ȯ��
				// printf("ptr[%d]: %d ", i, );
				printf("arr[%d]: %d\n", i, arr[i]);
				ptr++;
			}
			printf("\n");
			break;
		}

		case 3: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 };

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5
			int* ptr = arr[arrLen - 1];

			int sum = 0;
			for (int i = 0; i < arrLen - 1; i++) {
			}
			printf("sum: %d\n", sum);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. *ptr += 2\n");
	printf("2. string reverse\n");
	printf("3. biggest character\n");
	printf("4. biggest character\n");
	printf("==============================\n");
	printf("Select option: ");
}