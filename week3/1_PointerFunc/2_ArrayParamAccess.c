#include <stdio.h>

void ShowArayElem(int* param, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
	printf("\n");
}

void AddArayElem(int* param, int len, int add) {
	for (int i = 0; i < len; i++) {
		param[i] += add;
	}
}


int main() {
	int arr[3] = { 1, 2, 3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int)); // 2 3 4

	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int)); // 4 5 6

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int)); // 7 8 9
	return 0;
}