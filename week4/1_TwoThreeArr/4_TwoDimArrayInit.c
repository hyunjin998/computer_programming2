#include <stdio.h>

int main() {
	int i, j;

	// 2���� �迭 �ʱ�ȭ ��1
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// 2���� �迭 �ʱ�ȭ ��2
	int arr2[3][3] = {
		{1},
		{4, 5},
		{7, 8, 9}
	};

	// 3���� �迭 �ʱ�ȭ ��3
	int arr3[3][3] = { 1, 2, 3, 4, 5, 6, 7 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[1][j]); // 1 2 3
									   // 4 5 6
									   // 7 8 9
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[1][j]); // 1 0 0
									   // 4 5 0
									   // 7 8 9
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[1][j]); // 1 2 3
									   // 4 5 6
									   // 7 0 0
		printf("\n");
	}

	return 0;
}