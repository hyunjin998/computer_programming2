#include <stdio.h>
void Question();
void Swap(int x, int y); // 1 (1)
void Swap2(int* px, int* py); // 1 (2)
void SumAvg(float *a, float *b); // 2
void Square(int a[], int len); // 4


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			int num1, num2;
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);
			
			Swap(num1, num2); // (1) �����͸� ������� �ʰ� �Լ� �ۼ�
			Swap2(&num1, &num2); // (2) �����͸� �Ű������� ����� �Լ� �ۼ�

			break;
		}

		case 2: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) �� ���� �Ǽ��� �Է� ����
			
			SumAvg(&num1, &num2);
			break;
		}

		case 3: {

			
			break;
		}

		case 4: {
			int arr[100];
			int arrLen = sizeof(arr) / sizeof(int);

			for (int i = 0; i < arrLen; i++) {
				arr[i] = i + 1; // 1���� 100������ ������ ����ִ� �迭
			}
			
			Square(arr, arrLen); // �迭�� �Ű������� �Ѱ���
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("================================================\n");
	printf("1. Swap\n"); // �� ������ ���� �ٲٴ� �Լ� �ۼ��� ȣ��
	printf("2. Sum, Avgerage\n"); // �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1�� ����� ȣ��
	printf("3. \n");
	printf("4. 2 4 6 ... 100\n"); // 2�� ��� ��° ��ġ�� �ִ� ���� ����ϴ� �Լ� ȣ��
	printf("================================================\n");
	printf("Select option: ");
}


void Swap(int x, int y) { // 1
	int tmp = x;
	x = y;
	y = tmp;
	printf("num1: %d, num2: %d\n", x, y);
}


void Swap2(int* px, int* py) { // 1
	int tmp = *px;
	*px = *py;
	*py = tmp;
	printf("num1: %d, num2: %d\n", *px, *py);
}


// 2. (2) �� �Ǽ��� �հ�� ����� ��ȯ�ϴ� �Լ� �ۼ� (������ ���)
void SumAvg(float *a, float *b) {
	long double sum = *a + *b; // overflow
	double avg = sum / 2;
	printf("Sum: %.2lf, Avg: %.2lf\n", sum, avg); // (3) ����� �հ� ��� ���
}


void Square(int a[], int len) { // 4
	int sum = 2;
	for (int i = 0; i < len; i++) {
		if (a[i] == sum) {
			printf("%d ", a[i]);
			sum *= 2;
		}
	}
	printf("\n");
}