#include <stdio.h>

int main() {
	int arr[5]; // 길이가 5인 int형 배열 선언, 배열의 이름은 arr
	int sum = 0, i;

	// 첫 번째 배열요소부터 마지막 배열요소까지 값을 저장
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++) // 배열요소에 저장된 값 전부를 변수 sum에 더함
		sum += arr[i]; // sum = 10 + 20 + 30 + 40 + 50

	printf("배열요소에 저장된 값의 합: %d\n", sum); // 150
	return 0;
}