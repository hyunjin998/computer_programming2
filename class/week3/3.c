/* 길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화 한 다음
이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언한다.
그 다음 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근하여
배열에 저장된 모든 정수를 더하여
그 결과를 출력하는 프로그램을 작성해 보자.
*/


#include <stdio.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 }; // 길이가 5인 int형 배열 arr 선언 및 1, 2, 3, 4, 5로 초기화

	int arrLen = sizeof(arr) / sizeof(int); // arrLen = 5 * 4 / 4 = 5
	int* ptr = &arr[arrLen - 1]; // 이 배열의 마지막 요소를 가리키는 포인터 변수 ptr 선언

	int sum = 0;
	for (int i = 0; i < arrLen; i++) {
		sum += *ptr; // 배열에 저장된 모든 정수를 더함

		*(ptr--); // 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근
	}

	printf("sum: %d\n", sum); // 결과 출력, 15
	return 0;
}