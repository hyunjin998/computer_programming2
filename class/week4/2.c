/* 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해 보자.
예를 들어서 함수의 이름이 Swap3이라고 하면, 다음의 형태로 함수가 호출되어야 한다.

Swap3(&num1, &num2, &num3);

그리고 함수 호출의 결과로 num1에 저장된 값은 num2에,
num2에 저장된 값은 num3에,
그리고 num3에 저장된 값은 num1에 저장되어야 한다.
*/

#include <stdio.h>
void Swap3(int* a, int* b, int* c);


int main() {
	int num1, num2, num3;
	printf("num1, num2, num3: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	return 0;
}


// 세 변수에 저장된 값을 서로 뒤바꾸는 함수
void Swap3(int* a, int* b, int* c) {
	int tmp = *a;
	*a = *c;
	*c = *b;;
	*b = tmp;

	printf("num1: %d, num2: %d, num3: %d\n", *a, *b, *c);
}