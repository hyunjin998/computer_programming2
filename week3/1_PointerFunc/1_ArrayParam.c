#include <stdio.h>

void ShowArayElem(int* param, int len) { // 두 번째 인자로 배열의 길이정보를 전달받도록 정의
	for (int i = 0; i < len; i++) {
		printf("%d ", param[i]); // int형 포인터 변수의 이름을 대상으로 배열형태의 접근을 진행
	}
	printf("\n");
}


int main() {
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	
	// 길이가 다른 두 배열을 대상으로 ShowArayElem 함수를 호출
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int)); // 4 * 3 / 4 = 3, 1 2 3
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int)); // 4 * 5 / 4 = 5, 4 5 6 7 8
	return 0;
}