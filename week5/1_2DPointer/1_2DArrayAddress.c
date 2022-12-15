#include <stdio.h>

int main() {
	int arr2d[3][3];
	printf("%d\n", arr2d); // arr2d 1���� ù ��° ����� �ּҰ�
	printf("%d\n", arr2d[0]); // arr2d 1���� ù ��° ����� �ּҰ�
	printf("%d\n\n", &arr2d[0][0]); // arr2d 1���� ù ��° ����� �ּҰ�

	printf("%d\n", arr2d[1]); // arr2d 2���� ù ��° ����� �ּҰ�, arr2d 1���� ù ��° ����� �ּҰ� + 12
	printf("%d\n\n", &arr2d[1][0]); // arr2d 2���� ù ��° ����� �ּҰ�

	printf("%d\n", arr2d[2]); // arr2d 3���� ù ��° ����� �ּҰ�, arr2d 2���� ù ���� ����� �ּҰ� + 12
	printf("%d\n\n", &arr2d[2][0]); // arr2d 3���� ù ��° ����� �ּҰ�


	// �迭�̸� arr2d�� ������� sizeof ������ �ϴ� ��� �迭 ��ü�� ũ�⸦ ��ȯ
	printf("sizeof(arr2d): %d\n", sizeof(arr2d)); // 36

	// arr2d[0], arr2d[1], arr2d[2]�� ������� sizeof ������ �ϴ� ��� �� ���� ũ�⸦ ��ȯ
	printf("sizeof(arr2d[0]): %d\n", sizeof(arr2d[0])); // 12
	printf("sizeof(arr2d[1]): %d\n", sizeof(arr2d[1])); // 12
	printf("sizeof(arr2d[2]): %d\n", sizeof(arr2d[2])); // 12

	return 0;
}