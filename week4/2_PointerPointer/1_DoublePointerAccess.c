#include <stdio.h>

int main() {
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p\n", ptr, *dptr); // ptr의 주소값 ptr의 주소값, *dptr == ptr
	printf("%9g %9g\n", num, **dptr); // 3.14 3.14, **dptr == num
	ptr2 = *dptr; // *dptr == ptr이므로 ptr2 = ptr과 같은 문장
	*ptr2 = 10.99; // 변수 num의 값을 10.99로 변경
	printf("%9g %9g\n", num, **dptr); // 10.99 10.99, 변경된 num의 값을 포인터 변수 dptr과 num을 이용해서 확인

	return 0;
}