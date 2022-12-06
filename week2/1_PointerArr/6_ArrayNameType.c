#include <stdio.h>

int main() {
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름: %p\n", arr); // 배열의 이름이 의미하는 바의 확인을 위해 arr에 담긴 내용을 출력
									  // %p는 주소 값의 출력에 사용되는 서식문자
	printf("첫 번째 요소: %p\n", &arr[0]); // arr의 첫 번째 주소 값
	printf("두 번째 요소: %p\n", &arr[1]); // arr의 두 번째 주소 값
 	printf("세 번째 요소: %p\n", &arr[2]); // arr의 세 번째 주소 값

	// arr = &arr[i]; // 컴파일 에러
	return 0;
}