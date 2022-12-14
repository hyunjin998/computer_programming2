/* 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고,
이를 호출하는 main 함수를 작성해 보자.
단, 여기서는 다음 두 가지 형태로 함수를 정의해야 한다.

(1) call-by-value 기반의 SquareByValue 함수
(2) call-by-reference 기반의 SquareByReference 함수

SquareByValue 함수는 인자로 전달된 값의 제곱을 반환해야 하며,
SquareByReference 함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서
해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장해야 한다.
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

// 인자로 전달된 값의 제곱을 반환
int SquareByValue(int a) {
	return a * a;
}


// 정수가 저장되어 있는 변수의 주소 값을 인자로 받아
// 해당 변수에 저장된 값의 제곱을 그 변수에 다시 저장
int SquareByReference(int* a) {
	*a *= *a;
	return *a;
}