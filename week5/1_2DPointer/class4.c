#include <stdio.h>

int main() {
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4;
	int arr2d[2][2] = { 1, 2, 3, 4 };

	int* ptrArr[4] = { &num1, &num2, &num3, &num4 }; // 포인터 배열
	int(*arrPtr)[2] = arr2d; // 배열 포인터

	printf("%d %d %d %d\n", *ptrArr[0], *ptrArr[1], *ptrArr[2], *ptrArr[3]); // 1 2 3 4

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			printf("%d ", arrPtr[i][j]); // 1 2\n 3 4
		printf("\n");
	}

	return 0;
}