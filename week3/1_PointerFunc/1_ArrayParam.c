#include <stdio.h>

void ShowArayElem(int* param, int len) { // �� ��° ���ڷ� �迭�� ���������� ���޹޵��� ����
	for (int i = 0; i < len; i++) {
		printf("%d ", param[i]); // int�� ������ ������ �̸��� ������� �迭������ ������ ����
	}
	printf("\n");
}


int main() {
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	
	// ���̰� �ٸ� �� �迭�� ������� ShowArayElem �Լ��� ȣ��
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int)); // 4 * 3 / 4 = 3, 1 2 3
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int)); // 4 * 5 / 4 = 5, 4 5 6 7 8
	return 0;
}