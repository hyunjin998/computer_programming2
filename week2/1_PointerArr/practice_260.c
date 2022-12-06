#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.260
			int arr[5]; // 길이가 5인 int형 배열 선언
			int arrLen = sizeof(arr) / sizeof(int); // arrLen = 4 * 5 / 4 = 5

			int sum = 0;
			for (int i = 0; i < arrLen; i++) {
				printf("%d: ", i + 1);
				scanf_s("%d", &arr[i]); // 사용자로부터 5개의 정수를 입력 받음
				sum += arr[i];
			}

			int max = arr[0], min = arr[0];
			for (int i = 0; i < arrLen; i++){
				(max < arr[i] ? max = arr[i] : max);
				(min > arr[i] ? min = arr[i] : min);
			}

			printf("입력된 정수 중에서 최댓값: %d\n", max);
			printf("입력된 정수 중에서 최솟값: %d\n", min);
			printf("입력된 정수의 총 합: %d\n", sum);
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