#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.260
			int arr[5]; // ���̰� 5�� int�� �迭 ����
			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 4 * 5 / 4 = 5

			int sum = 0;
			for (int i = 0; i < arrLen; i++) {
				printf("%d: ", i + 1);
				scanf_s("%d", &arr[i]); // ����ڷκ��� 5���� ������ �Է� ����
				sum += arr[i];
			}

			int max = arr[0], min = arr[0];
			for (int i = 0; i < arrLen; i++){
				(max < arr[i] ? max = arr[i] : max);
				(min > arr[i] ? min = arr[i] : min);
			}

			printf("�Էµ� ���� �߿��� �ִ�: %d\n", max);
			printf("�Էµ� ���� �߿��� �ּڰ�: %d\n", min);
			printf("�Էµ� ������ �� ��: %d\n", sum);
			break;
		}


		case 2: { // p.260
			char arr[] = { "Good time" };
			printf("%s\n", arr);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. arr[5], Max, Min, Sum\n");
	printf("2. Good time\n");
	printf("==============================\n");
	printf("Select option: ");
}