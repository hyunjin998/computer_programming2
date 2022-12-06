#include <stdio.h>

int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 }; // int형 포인터 배열을 선언, 변수의 주소값으로 초기화

	// 배열요소가 가리키는 변수에 저장된 값 출력
	printf("%d\n", *arr[0]); // 10
	printf("%d\n", *arr[1]); // 20
	printf("%d\n", *arr[2]); // 30
	return 0;
}