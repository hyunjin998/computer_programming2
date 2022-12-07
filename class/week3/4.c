/* ���̰� 6�� int�� �迭 arr�� �����ϰ� �̸� 1, 2, 3, 4, 5, 6���� �ʱ�ȭ �� ����
�迭�� ����� ���� ������ 6, 5, 4, 3, 2, 1�� �ǵ��� ������ ����.
��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ�
�̸� Ȱ���Ͽ� ����� ���� ������ �ڹٲ�� �Ѵ�.
*/


#include <stdio.h>

int main() {
	int arr[6] = { 1, 2, 3, 4, 5, 6 }; // ���̰� 6�� int�� �迭 arr ���� �� 1, 2, 3, 4, 5, 6���� �ʱ�ȭ
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
	return 0;
}