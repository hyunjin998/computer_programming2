/* ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �������� ����ϴ� ���α׷��� �ۼ��� ����.
���� �� ���α׷� ����ڰ� 3�� 5�� �Է��ϸ� 3��, 4��, 5���� ��µǾ�� �ϰ�,
2�� 4�� �Է��ϸ� 2��, 3��, 4���� ��µǾ�� �Ѵ�.

�� �Ѱ��� ������ �ִ�.
����ڴ� �� ���� ���ڸ� �Է� �� ���� �Է� ������ �����ο��� �Ѵ�.
��, 3�� 5�� �Է��ϰ� 5�� 3�� �Է��ϰ� ���α׷��� ���� ����� ����ؾ� �Ѵ�.
*/

#include <stdio.h>
int NumCompare(int a, int b); // 3�� 5�� �Է��ϰ� 5�� 3�� �Է��ϰ� �Ȱ��� ����� ������ִ� �Լ�
int GuGuDan(int c, int d); // ������ ��� �Լ�


int main() {
	int num1, num2;
	printf("Input 2 integers: ");
	scanf_s("%d %d", &num1, &num2); // �� ���� ������ �Է� ����

	NumCompare(num1, num2);
	return 0;
}


int NumCompare(int a, int b) { // 3�� 5�� �Է��ϰ� 5�� 3�� �Է��ϰ� �Ȱ��� ����� ������ִ� �Լ�
	int dan_start, dan_end;
	if (a < b) {
		dan_start = a;
		dan_end = b;
	}

	else {
		dan_start = b;
		dan_end = a;
	}
	return GuGuDan(dan_start, dan_end); // ������ ��� �Լ�
}


int GuGuDan(int c, int d) { // ������ ��� �Լ�
	for (int i = c; i < d + 1; i++) { // i = ��
		for (int j = 2; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}