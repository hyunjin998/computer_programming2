#include <stdio.h>

int main() {
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p\n", ptr, *dptr); // ptr�� �ּҰ� ptr�� �ּҰ�, *dptr == ptr
	printf("%9g %9g\n", num, **dptr); // 3.14 3.14, **dptr == num
	ptr2 = *dptr; // *dptr == ptr�̹Ƿ� ptr2 = ptr�� ���� ����
	*ptr2 = 10.99; // ���� num�� ���� 10.99�� ����
	printf("%9g %9g\n", num, **dptr); // 10.99 10.99, ����� num�� ���� ������ ���� dptr�� num�� �̿��ؼ� Ȯ��

	return 0;
}