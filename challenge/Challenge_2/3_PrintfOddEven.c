/* 길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고,
짝수이면 뒤에서부터 채워나가는 형식을 취하기로 하자.
따라서 사용자가 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]을 입력했다면,
배열에는 [1, 3, 5, 7, 9, 10, 8, 6, 4, 2]의 순으로 저장이 되어야 한다.

(실행 예)
총 10개의 숫자 입력
입력: 1
입력: 1
입력: 4
입력: 4
입력: 4
입력: 4
입력: 3
입력: 3
입력: 2
입력: 2
배열 요소의 출력: 1 1 3 3 2 2 4 4 4 4
*/


#include <stdio.h>
void PrintfOddEven(int a[], int len);


int main() {
	int arr[10]; // 길이가 10인 배열 선언
	int arrLen = sizeof(arr) / sizeof(int);

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < arrLen; i++) {
		printf("입력: ");
		scanf_s("%d", &arr[i]); // 총 10개의 정수를 입력 받음
	}

	PrintfOddEven(arr, arrLen); // (num, 10)
	return 0;
}


void PrintfOddEven(int a[], int len) {
	int param[10];
	int cnt = 0;
	int cnt2 = 1;

	for (int i = 0; i < len; i++) {
		if (a[i] % 2 != 0) { // 홀수
			param[cnt] = a[i];
			cnt++;
		}
		else { // 짝수
			param[len - cnt2] = a[i];
			cnt2++;
		}
	}

	printf("배열 요소의 출력: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
}