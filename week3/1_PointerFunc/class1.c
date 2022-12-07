#include <stdio.h>

// ���� 1, 2
void AddFunc(int a, int b) {
	printf("a: %d\nb: %d\na+b:%d\n", a, b, a + b);
}


// ���� 3
void ShowArray(int* a) {
	printf("a: %d\n", a);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}


// ���� 4
void SumArray(int* a, int len) {
	int sum = 0;
	printf("sizeof(a): %d len: %d\n", sizeof(a), len);

	for (int i = 0; i < len; i++) {
		printf("a[%d]: %d ", i, a[i]);
		sum += a[i];
	}
	printf("\n�迭 ����� ���� %d\n", sum);
}


// ���� 5
void ChgArray(int* a, int len, int addNum) {
	for (int i = 0; i < len; i++) {
		a[i] += addNum;
	}
}


// ���� 6 - �Լ� �����, int *a�� int a[]�� ���� ǥ��
void ShowArray2(int a[]) {
	printf("a: %d\n", a);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}


int main() {
	int num1 = 5, num2 = 7;

	// 1. ���ڿ� ���� - num1�� num2 ���� '����'�� ����
	printf("=== ���� 1 ===\n");
	AddFunc(num1, num2); // a: 5 b: 7 a+b: 12

	
	// 2. AddFunc() �Լ� �ȿ��� ���� ������ų ��� - main()�Լ� ���� ���� �ٲ�� ���� �ƴ�
	printf("=== ���� 2 ===\n");
	printf("[before]num1: %d num2: %d\n", num1, num2); // num1: 5 num2: 7

	AddFunc(num1, num2); // a: 5 b: 7 a+b: 12
	printf("[after  ]num: %d num2: %d\n", num1, num2); // num1: 5 num2: 7


	// 3. �迭�� �Լ��� ���ڷ� �����ϱ�
	printf("=== ���� 3 ===\n");
	int arr[4] = { 100, 200, 300, 400 };
	printf("arr: %d\n", arr); // arr�� �ּҰ�
	ShowArray(arr); // arr�� �ּҰ�
					// 100 200 300 400


	// 4. �迭�� �� ���ϱ�
	printf("=== ���� 4 ===\n");
	SumArray(arr, sizeof(arr) / sizeof(int)); // (arr, 4) sizeof(arr) / sizeof(int)�� �迭�� ũ��
											  // sizeof(a): 4 len: 4 sum: 1000
	int arr2[] = { 100, 200, 300, 400, 500 };
	SumArray(arr2, sizeof(arr2) / sizeof(int)); // (arr2, 5)
												// sizeof(a): 4 len: 5 sum: 1500

	int* ptr = arr2;
	SumArray(ptr, sizeof(arr2) / sizeof(int)); // (ptr, 5)
											   // sizeof(a): 4 len: 5 sum: 1500


	// 5. �迭�� �� �����ϱ�
	printf("=== ���� 5 ===\n");
	ChgArray(arr, sizeof(arr) / sizeof(int), 100); // (arr, 4, 100)
	SumArray(arr, sizeof(arr) / sizeof(int)); // (arr, 4)
											  // sizeof(a): 4 len:4
											  // 200 300 400 500 sum: 1400


	// 6. �Լ� ���� ����
	printf("=== ���� 6 ===\n");
	ShowArray(arr); // arr�� ù ��° ����� �ּҰ�\n 200 300 400 500
	ShowArray2(arr); // arr�� ù ��° ����� �ּҰ�\n 200 300 400 500

	return 0;
}