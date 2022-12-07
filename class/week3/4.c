/* 길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5, 6으로 초기화 한 다음
배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경해 보자.
단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서
이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.
*/


#include <stdio.h>

int main() {
	int arr[6] = { 1, 2, 3, 4, 5, 6 }; // 길이가 6인 int형 배열 arr 선언 및 1, 2, 3, 4, 5, 6으로 초기화
	int arrLen = sizeof(arr) / sizeof(int); // arrLen = 6 * 4 / 4 = 6

	int* ptr1 = &arr[0]; // 배열의 앞을 가리키는 포인터 변수 ptr1 선언
	int* ptr2 = &arr[arrLen - 1]; // 배열의 뒤를 가리키는 포인터 변수 ptr2 선언

	for (int i = 0; i < arrLen / 2; i++) {
		int tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;

		*ptr1++;
		*ptr2--;
	}

	for (int i = 0; i < arrLen; i++) {
		printf("%d ", arr[i]); // 6 5 4 3 2 1
	}
	printf("\n");
	return 0;
}