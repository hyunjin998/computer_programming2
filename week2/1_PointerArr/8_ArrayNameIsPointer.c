#include <stdio.h>

int main() {
	int arr[3] = { 15, 25, 35 };

	// 포인터 변수 ptr이 선언된 배열이름 arr과 동일한 주소 값을 갖도록 하기 위해 첫 번째 요소의 주소 값을 저장
	// 배열이름을 이용해서 변수 ptr을 초기화해도 그 결과는 같기 때문에
	// int *ptr = arr; 과 동일한 문장
	int* ptr = &arr[0];

	// 포인터 변수와 배열의 이름을 대상으로 수행 가능한 연산의 형태에는 차이가 없음
	printf("%d %d\n", ptr[0], arr[0]); // 15 15 
	printf("%d %d\n", ptr[1], arr[1]); // 25 25
	printf("%d %d\n", ptr[2], arr[2]); // 35 35
	printf("%d %d\n", *ptr, *arr); // 15 15

	return 0;
}