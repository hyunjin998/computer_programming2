#include <stdio.h>

int main() {
	int arr[3][2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
			printf("%p\n", &arr[i][j]); // �ּҰ�, int�� ������ ũ���� 4����Ʈ��ŭ ���̰� ��
	}
	return 0;
}