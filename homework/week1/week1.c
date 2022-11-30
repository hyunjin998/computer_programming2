#include <stdio.h>
void Question();
float CmToM(float a); // 1
double Add(float a, float b); // 2
float Avg(float a, float b); // 2
double AddAvg(float a, float b, char c); // 3
int OneToNum(int a); // 4
int OneToNum_for(int a); // 5 (1)
int OneToNum_recur(int a, int b); // 5 (2)
void Swap(int x, int y); // 8(1)
void pSwap(int* px, int* py); // 8(2)
void pAddAvg(float a, float b); // 9


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			float height;
			printf("height(cm): ");
			scanf_s("%f", &height); // (1) Ű�� �Է� ����
			printf("%0.2fm\n", CmToM(height)); // (2) �Է� ���� Ű���� �Լ��� �Ѱ��ְ�, ȯ��� Ű�� ��ȯ��
											   // (3) ��ȯ���� m���� Ű ���
			break;
		}


		case 2: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) �� ���� �Ǽ� �Է� ����
			printf("Sum: %0.2lf\nAverage: %0.2f\n", Add(num1, num2), Avg(num1, num2)); // (2) �� �Ǽ��� ���� ���ϴ� �Լ��� �ۼ��ϰ� ȣ��
																						 // (3) �� �Ǽ��� ����� ���ϴ� �Լ��� �ۼ��ϰ� ȣ��
																						 // (4) ����� �հ� ��� ���
			break;
		}


		case 3: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) �� ���� �Ǽ� �Է� ����

			char ch;
			while (1) {
				printf("Input '+' or '#' ('+' == add, '#' == avg): ");
				getchar();
				scanf_s("%c", &ch, 1);
				if (ch == '+' || ch == '#') break;
			}

			printf("%0.2f\n", AddAvg(num1, num2, ch)); // (2) �� �Ǽ��� �����ڸ� �Ű������� �ѱ�
													   // (3) ����� �հ� ��� ���
			break;
		}


		case 4: {
			int num;
			printf("num: ");
			scanf_s("%d", &num); // ���� �Է� ����

			printf("%d\n", OneToNum(num)); // 1���� �Է¹��� ���������� ���� ���ϴ� �Լ� ȣ��
			break;
		}


		case 5: {
			int num;
			int sum = 0;
			printf("num: ");
			scanf_s("%d", &num); // ���� �Է� ����

			printf("(1)using for: %d\n", OneToNum_for(num)); // (���1) �ݺ��� ���
			printf("(2)using recursive: %d\n", OneToNum_recur(num, sum)); // (���2) ����Լ� ���
			break;
		}


		case 6: {
			int a = 100;
			int* p = &a; // ������ p�� a�� �ּҰ��� ����Ŵ
			*p = 200; // ������ p�� ����Ű�� �ּҰ� �ȿ� �� 200�� ����
			printf("%d\n", a); // a ���, 200
			printf("%d\n", (*p) + a); // 200 + 200 = 400
			break;
		}


		case 7: {
			int a = 100;
			int* p = &a; // ������ p�� a�� �ּҰ��� ����Ŵ
			double* pd; // ���������� pd ����
			pd = p; // pd�� p�� ������Ÿ���� �޶� �̻��� ���� ����
			printf("%lf\n", *pd); // �����Ⱚ ���
			break;
		}


		case 8: {
			int num1, num2;
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			Swap(num1, num2); // (���1) �����͸� ������� �ʰ� �Լ� �ۼ�
			pSwap(&num1, &num2); // (���2) �����͸� �Ű������� ����� �Լ� �ۼ�
			break;
		}


		case 9: {
			float num1, num2;
			printf("num1, num2: ");
			scanf_s("%f %f", &num1, &num2); // (1) �� ���� �Ǽ��� �Է� ����

			pAddAvg(num1, num2); // (2) �� �Ǽ��� �հ�� ����� ��ȯ�ϴ� �Լ� ȣ�� (������ ���)
			break;
		}
		}
	}
	return 0;
}



void Question() {
	printf("================================================\n");
	printf("1. cm -> m\n"); // Ű�� cm������ �Է� �޾� m������ ȯ���ؼ� ������ִ� ���α׷�
	printf("2. add, avg using each functions\n"); // �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ��� ���� ����� ȣ��
	printf("3. add, avg using only one function\n"); // �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1���� ����� ȣ��
	printf("4. 1 + 2 + ... + num\n"); // ������ �Է� �޾� 1���� �Է¹��� ���������� ���� ���ϴ� �Լ��� �ۼ��� ȣ���ϰ� ���� ����� ��� ���
	printf("5. 1 + 2 + ... + num(2)\n"); // 4�� ������ (1)�ݺ��� (2)����Լ� ���
	printf("6. pointer result\n"); // �ڵ��� ���� ����� �����غ���, ����� ��ġ�ϴ��� Ȯ���غ���
	printf("7. pointer result(2)\n"); // 6�� ����
	printf("8. swap(num1, num2)\n"); // �� ������ ���� �ٲٴ� �Լ��� �ۼ��� ȣ��
	printf("9. add,avg using only one function with pointer\n"); // �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1���� ���� ȣ��
	printf("================================================\n");
	printf("Select option: ");
}

float CmToM(float a) { // 1
	return a / 100;
}

double Add(float a, float b) { // 2
	double result; // overflow
	result = a + b;
	return result;
}

float Avg(float a, float b) { // 2
	return Add(a, b) / 2;
}

double AddAvg(float a, float b, char c) { // 3
	double result; // overflow
	result = Add(a, b);

	if (c == '+') return result; // (2) �����ڰ� '+'�̸� ���� ��ȯ�ϰ�
	else return result / 2; // (2) '#'�̸� ����� ��ȯ
}

int OneToNum(int a) { // 4
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += i; // 1���� �Է¹��� �������� ����

		if (i % 5 == 0) // (����1) 5�� ����� ���� ����
			sum -= i;

		else {
			if (sum >= 1000) { // (����2) ���� 1000�� �Ѿ�� �� �̻� ������ �ʱ�
				printf("1 + 2 + ... + %d: ", i);
				break;
			}
		}
	}
	return sum; // �� ��ȯ
}

int OneToNum_for(int a) { // 5 (���1) �ݺ��� ���
	int sum = 0;
	for (int i = 0; i <= a; i++) // 1���� �Է¹��� ���������� ���� ����
		sum += i;

	return sum;
}

int OneToNum_recur(int a, int b) { // 5 (���2) ����Լ� ���
	b += a;

	if (a == 1) return b;
	else return OneToNum_recur(a - 1, b);
}

void Swap(int x, int y) { // 8 (���1) �����͸� ������� �ʰ� �Լ� �ۼ�
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf("(1) not using pointer\nnum1: %d, num2: %d\n", x, y);
}

void pSwap(int* px, int* py) { // 8 (���2) �����͸� �Ű������� ����� �Լ� �ۼ�
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
	printf("(2) using pointer\nnum1: %d, num2: %d\n", *px, *py);
}

void pAddAvg(float a, float b) { // 9
	float* pa, * pb;
	pa = &a;
	pb = &b;

	double add; // overflow
	add  = *pa + *pb;
	float avg = add / 2;
	printf("sum: %0.2lf, avg: %0.2f\n", add, avg); // (3) ����� �հ� ��� ���
}