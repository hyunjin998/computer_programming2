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
				*(ptr++) += 2;

				// ���������� ������ �̷�������� Ȯ��
				printf("arr[%d]: %d\n", i, arr[i]); // 3 4 5 6 7
			}
			printf("\n");
			break;
		}

		case 2: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 }; // ���̰� 5�� int�� �迭 arr�� �����ϰ� 1, 2, 3, 4, 5�� �ʱ�ȭ
			int* ptr = arr; // �� �迭�� ù ��° ��Ҹ� ����Ű�� ������ ���� ptr ����

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5

			// ������ ���� ptr�� ����� ���� ������Ű�� �ʰ�,
			// ptr�� ������� ���������� ��, �� ����� ��ȯ�Ǵ� �ּ� ���� ���ؼ�
			// ��� �迭��ҿ� ������ ���� 2�� ����
			for (int i = 0; i < arrLen; i++) {
				*(ptr + i) += 2;
				
				// ���������� ������ �̷�������� Ȯ��
				printf("ptr[%d]: %d ", i, ptr[i]); // 3 4 5 6 7
				printf("arr[%d]: %d\n", i, arr[i]); // 3 4 5 6 7
			}
			printf("\n");
			break;
		}

		case 3: { // p.300
			int arr[5] = { 1, 2, 3, 4, 5 }; // ���̰� 5�� int�� �迭 arr ���� �� 1, 2, 3, 4, 5�� �ʱ�ȭ

			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5
			int* ptr = &arr[arrLen - 1]; // �� �迭�� ������ ��Ҹ� ����Ű�� ������ ���� ptr ����

			int sum = 0;
			for (int i = 0; i < arrLen; i++) {
				sum += *ptr; // �迭�� ����� ��� ������ ����

				*(ptr--); // ������ ���� ptr�� ����� ���� ���ҽ�Ű�� ������ ������ ������� ��� �迭��ҿ� ����
			}

			printf("sum: %d\n", sum); // ��� ���, 15
			break;
		}

		case 4: { // p.300
			int arr[6] = { 1, 2, 3, 4, 5, 6}; // ���̰� 6�� int�� �迭 arr ���� �� 1, 2, 3, 4, 5, 6���� �ʱ�ȭ
			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 6 * 4 / 4 = 6

			int* ptr1 = &arr[0]; // �迭�� ���� ����Ű�� ������ ���� ptr1 ����
			int* ptr2 = &arr[arrLen - 1]; // �迭�� �ڸ� ����Ű�� ������ ���� ptr2 ����

			for (int i = 0; i < arrLen / 2; i++) {
				int tmp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = tmp;

				*ptr1++;
				*ptr2--;
			}

			for (int i = 0; i < arrLen; i++) {
				printf("%d ", arr[i]); // 6 5 4 3 2 1
			}
			printf("\n");
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. *(ptr++) += 2\n");
	printf("2. *(ptr + i) += 2\n");
	printf("3. *(ptr--)\n");
	printf("4. reverse arr\n");
	printf("==============================\n");
	printf("Select option: ");
}