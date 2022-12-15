#include <stdio.h>
void Question();

// (3) �Լ������͸� �����ϰ� ���� ���ÿ� ���� �Լ������ͷ� �ٸ� �Լ��� ȣ��
int answer(int x, int y, int (*cmp)(int n1, int n2));

// (1) �� ���� �޾� 1.��, 2.��, 3.��, 4.�� �� ū ��, 5.�� �� ���� ���� ��ȯ�ϴ� 5���� �Լ�
int sum(int x, int y); // 1
int sub(int x, int y); // 2
int mul(int x, int y); // 3
int max(int x, int y); // 4
int min(int x, int y); // 5


int main() {
	while (1) { // (2) �ݺ� ����
		Question();
		int opt;
		scanf_s("%d", &opt);

		int num1, num2;
		int result;

		switch (opt) {
		case 0: return; // (2) 0�� �Է��ϸ� ����, quit

		case 1: { // sum
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2); // (2) �� ������ �Է� ����

			result = answer(num1, num2, sum);
			printf("%d + %d = %d\n", num1, num2, result); // (4) �����Լ����� ��� ���
			break;
		}

		case 2: { // subtraction
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, sub);
			printf("%d - %d = %d\n", num1, num2, result);
			break;
		}

		case 3: { // multiply
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, mul);
			printf("%d * %d = %d\n", num1, num2, result);
			break;
		}

		case 4: { // maxNum
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, max);
			printf("MaxNum: %d\n", result);
			break;
		}

		case 5: { // minNum
			printf("num1, num2: ");
			scanf_s("%d %d", &num1, &num2);

			result = answer(num1, num2, min);
			printf("MinNum: %d\n", result);
			break;
		}
		}
	}
	return 0;
}


void Question() { // (2) � ����ɤ� �� ������ ����
	printf("===========================\n");
	printf("0. quit\n");
	printf("1. sum\n");
	printf("2. subtraction\n");
	printf("3. multiply\n");
	printf("4. maxNum\n");
	printf("5. minNum\n");
	printf("===========================\n");
	printf("Select option: ");
}

int answer(int x, int y, int (*cmp)(int n1, int n2)) {
	return cmp(x, y);
}

int sum(int x, int y) { // 1
	return x + y;
}

int sub(int x, int y) { // 2
	return x - y;
}

int mul(int x, int y) { // 3
	return x * y;
}

int max(int x, int y) { // 4
	return (x > y) ? x : y;
}

int min(int x, int y) { // 5
	return (x < y) ? x : y;
}