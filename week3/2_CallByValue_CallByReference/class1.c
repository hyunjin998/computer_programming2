#include <stdio.h>

// 예제 1
void SwapValue(int a, int b) {
	int tmp;

	printf("a: %d b:%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a:%d b:%d\n", a, b);
}


// 예제 2
void SwapRef(int* a, int* b) {
	int tmp;

	// b -> a, a -> b
	printf("a: %d b: %d\n", a, b);
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("a: %d b: %d\n", a, b);
}

// 문제2. 왜 인자를 'const int *arr'로 선언했을까?
void ShowArray(const int* a, int len) {
	for (int i = 0; i < len; i++) {
		printf("a[%d]: %d\n", i, a[i]);
	}
}

int main() {
	int num1 = 5, num2 = 7;

	// 1. SwapFunc() 함수 안에서 값을 서로 바꿀 경우 - main() 함수 안의 값이 무조건 바뀌는 것은 아니다.
	// Call-by-Value
	printf("=== 예제 1 ===\n");
	printf("[before]num1: %d num2:%d\n", num1, num2); // 5 7
	SwapValue(num1, num2);
	printf("[after ]num1: %d num2: %d\n", num1, num2); // 5 7


	// 2. 주소값을 함수의 인자로 전달하면 값을 바꿀 수 있다.
	// Call-by-Reference
	printf("=== 예제 2 ===\n");
	printf("[before]num1: %d num2: %d\n", num1, num2); // 5 7
	SwapRef(&num1, &num2);
	printf("[after ]num1: %d num2: %d\n", num1, num2); // 7 5


	// 3. scanf() 함수 호출시, &연산자를 붙이는 이유
	printf("=== 예제 3 ===\n");
	printf("[before]num1: %d num2: %d\n", num1, num2); // 7 5
	printf("num1, num2를 차례로 입력하시오.");
	scanf_s("%d %d", &num1, &num2);
	printf("[after ]num1: %d num2: %d\n", num1, num2);


	// 4. 문자열(string)의 입력
	printf("=== 예제 4 ===\n");
	
	char str[10];
	printf("문자열을 입력하시오.");
	scanf_s("%s", str, 10); //
	printf("입력하신 문자열은 [%s]입니다.\n", str);


	// 5. main() 함수에서의 const 선언 - const로 선언되면 값을 바꿀 수가 없다.
	printf("=== 예제 5 ===\n");
	
	const int cnum = 10;
	// cnum = 20; // error
	printf("cnum:%d\n", cnum); // 10



	// 6. const로 선언되면 포인터 변수가 참조하는 대상을 변경할 수 없다.
	// - cptr1로 접근해 변경할 수 없다는 의미이지, num1의 값을 바꿀 수 없다는 말은 아니다.
	// 즉, num1로 접근해 변경할 수는 있다. (num1은 const가 아님)
	printf("=== 예제 6 ===\n");

	const int* cptr1 = &num1;
	printf("[before]cptr1:%d num1:%d\n", cptr1, num1);
	
	// *cptr1 = 700; // error
	num1 = 700;
	printf("[after ]cptr1: %d num1: %d\n", cptr1, num1);


	// 7. 포인터 변수의 상수화 - cptr2는 상수이므로 한 번 주소값이 저장되면 변경할 수 없다.
	printf("=== 예제 7 ===\n");

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