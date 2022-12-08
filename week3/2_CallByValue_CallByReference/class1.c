#include <stdio.h>

// ���� 1
void SwapValue(int a, int b) {
	int tmp;

	printf("a: %d b:%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a:%d b:%d\n", a, b);
}


// ���� 2
void SwapRef(int* a, int* b) {
	int tmp;

	// b -> a, a -> b
	printf("a: %d b: %d\n", a, b);
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("a: %d b: %d\n", a, b);
}

// ����2. �� ���ڸ� 'const int *arr'�� ����������?
void ShowArray(const int* a, int len) {
	for (int i = 0; i < len; i++) {
		printf("a[%d]: %d\n", i, a[i]);
	}
}

int main() {
	int num1 = 5, num2 = 7;

	// 1. SwapFunc() �Լ� �ȿ��� ���� ���� �ٲ� ��� - main() �Լ� ���� ���� ������ �ٲ�� ���� �ƴϴ�.
	// Call-by-Value
	printf("=== ���� 1 ===\n");
	printf("[before]num1: %d num2:%d\n", num1, num2); // 5 7
	SwapValue(num1, num2);
	printf("[after ]num1: %d num2: %d\n", num1, num2); // 5 7


	// 2. �ּҰ��� �Լ��� ���ڷ� �����ϸ� ���� �ٲ� �� �ִ�.
	// Call-by-Reference
	printf("=== ���� 2 ===\n");
	printf("[before]num1: %d num2: %d\n", num1, num2); // 5 7
	SwapRef(&num1, &num2);
	printf("[after ]num1: %d num2: %d\n", num1, num2); // 7 5


	// 3. scanf() �Լ� ȣ���, &�����ڸ� ���̴� ����
	printf("=== ���� 3 ===\n");
	printf("[before]num1: %d num2: %d\n", num1, num2); // 7 5
	printf("num1, num2�� ���ʷ� �Է��Ͻÿ�.");
	scanf_s("%d %d", &num1, &num2);
	printf("[after ]num1: %d num2: %d\n", num1, num2);


	// 4. ���ڿ�(string)�� �Է�
	printf("=== ���� 4 ===\n");
	
	char str[10];
	printf("���ڿ��� �Է��Ͻÿ�.");
	scanf_s("%s", str, 10); //
	printf("�Է��Ͻ� ���ڿ��� [%s]�Դϴ�.\n", str);


	// 5. main() �Լ������� const ���� - const�� ����Ǹ� ���� �ٲ� ���� ����.
	printf("=== ���� 5 ===\n");
	
	const int cnum = 10;
	// cnum = 20; // error
	printf("cnum:%d\n", cnum); // 10



	// 6. const�� ����Ǹ� ������ ������ �����ϴ� ����� ������ �� ����.
	// - cptr1�� ������ ������ �� ���ٴ� �ǹ�����, num1�� ���� �ٲ� �� ���ٴ� ���� �ƴϴ�.
	// ��, num1�� ������ ������ ���� �ִ�. (num1�� const�� �ƴ�)
	printf("=== ���� 6 ===\n");

	const int* cptr1 = &num1;
	printf("[before]cptr1:%d num1:%d\n", cptr1, num1);
	
	// *cptr1 = 700; // error
	num1 = 700;
	printf("[after ]cptr1: %d num1: %d\n", cptr1, num1);


	// 7. ������ ������ ���ȭ - cptr2�� ����̹Ƿ� �� �� �ּҰ��� ����Ǹ� ������ �� ����.
	printf("=== ���� 7 ===\n");

	int* const cptr2 = &num1;
	printf("[before]cptr2: %d num1:%d\n", cptr2, num1);

	// cptr2 = &num2; // error
	*cptr2 = 1000;
	printf("[after ]cptr2:%d num1:%d\n", cptr2, num1);


	// 8.
	const int* const cptr3 = &num1;
	// *cptr3 = 20; // error
	// cptr3 = &num2; // error

	return 0;
}