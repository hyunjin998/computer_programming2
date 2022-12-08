/* ���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�,
�̸� ȣ���ϴ� main �Լ��� �ۼ��� ����.
��, ���⼭�� ���� �� ���� ���·� �Լ��� �����ؾ� �Ѵ�.

(1) call-by-value ����� SquareByValue �Լ�
(2) call-by-reference ����� SquareByReference �Լ�

SquareByValue �Լ��� ���ڷ� ���޵� ���� ������ ��ȯ�ؾ� �ϸ�,
SquareByReference �Լ��� ������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾Ƽ�
�ش� ������ ����� ���� ������ �� ������ �ٽ� �����ؾ� �Ѵ�.
*/


#include <stdio.h>
int SquareByValue(int a); // CallByValue
int SquareByReference(int* a); // CallByReference


int main() {
	int num;
	printf("num: ");
	scanf_s("%d", &num);

	printf("CallByValue: %d\n", SquareByValue(num));
	printf("CallByReference: %d\n", SquareByReference(&num));
	return 0;
}

// ���ڷ� ���޵� ���� ������ ��ȯ
int SquareByValue(int a) {
	return a * a;
}


// ������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾�
// �ش� ������ ����� ���� ������ �� ������ �ٽ� ����
int SquareByReference(int* a) {
	*a *= *a;
	return *a;
}