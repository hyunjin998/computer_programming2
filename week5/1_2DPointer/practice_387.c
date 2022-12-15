#include <stdio.h>
void Question();
void SimpleFuncOne(int *a, int *b); // 2
void SimpleFuncTwo(int (*c)[4], int (*d)[4]); // 2
void ComplexFuncOne(int **a, int *(*b)[5]); // 3
void ComplexFuncTwo(int ***c, int ***(*d)[5]); // 3

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.387

			int* arr1[5];
			int* arr2[3][5];

			int** parr1 = arr1;
			int(*parr2)[5] = arr2;

			break;
		}


		case 2: { // p.387
			int arr1[3];
			int arr2[4];
			int arr3[3][4];
			int arr4[2][4];

			SimpleFuncOne(arr1, arr2);
			SimpleFuncTwo(arr3, arr4);

			break;
		}


		case 3: { // p.388
			int* arr1[3];
			int* arr2[3][5];
			int** arr3[5];
			int*** arr4[3][5];

			ComplexFuncOne(arr1, arr2);
			ComplexFuncTwo(arr3, arr4);

			break;
		}


		case 4: { // p.388
			int arr[3][2] = { {1, 2}, {3, 4}, {5, 6} };
			printf("%d %d\n", arr[1][0], arr[0][1]); // 3 2
			printf("%d %d\n", (*arr[2] + 1), *(arr[1] + 1)); // 6 4
			printf("%d %d\n", (*(arr + 2))[0], (*(arr + 0))[1]); // 5 2
			printf("%d %d\n", **arr, *(*(arr + 0) + 0)); // 1 1
			break;
		}


		case 5: { // p.388
			int arr[2][2][2] = { 1, 2, 3, 4, 5, 6 ,7 ,8 };
			printf("%d\n", arr[1][0][1]); // 6
			printf("%d\n", (*(arr + 1))[0][1]); // 6
			printf("%d\n", (*(*(arr + 1) + 0))[1]); // 6
			printf("%d\n", *(*(*(arr + 1) + 0) + 1)); // 6
			printf("%d\n", *(arr[1][0] + 1)); // 6
			printf("%d\n", *(*(arr[1] + 0) + 1)); // 6
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("========================================\n");
	printf("1. int **parr1 = arr1, int (*arr2)[5] = arr2\n");
	printf("2. int *a, int *b, int (*c)[4], int (*d)[4]\n");
	printf("3. int **a, int *(*b)[5], int ***c, int ***(*d)[5]\n");
	printf("4. 3 2 6 4 5 2 1 1\n");
	printf("1. CallByValue, CallByReference\n");
	printf("========================================\n");
	printf("Select option: ");
}


// 2
void SimpleFuncOne(int *a, int *b) {
}

void SimpleFuncTwo(int (*c)[4], int (*d)[4]) {
}


// 3
void ComplexFuncOne(int **a, int *(*b)[5]) {
}

void ComplexFuncTwo(int ***c, int ***(*d)[5]) {
}