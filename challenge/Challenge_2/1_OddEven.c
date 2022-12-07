/* 길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서,
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해 보자.
일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자.

단, 10개의 정수는 main 함수 내에서 입력 받도록 하고,
배열 내에 존재하는 홀수만 출력하는 함수와
배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해서
이 두 함수를 호출하는 방식으로 프로그램을 완성하자.

(실행 예)
총 10개의 숫자 입력
입력: 1
입력: 2
...
홀수 출력: 1, 3, 5, 7, 9
짝수 출력: 2, 4, 6, 8, 10
*/

#include <stdio.h>
void Odd(int *a, int len);
void Even(int *b, int len);


int main() {
	int num[10]; // 길이가 10인 배열 선언
	int numLen = sizeof(num) / sizeof(int);

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < numLen; i++) {
		printf("입력: ");
		scanf_s("%d", &num[i]); // main 함수 내에서 총 10개의 정수를 입력 받음
	}

	// 홀수 먼저 출력
	Odd(num, numLen);
	Even(num, numLen);

	return 0;
}


// 홀수만 출력하는 함수
void Odd(int *a, int len) {
	printf("홀수 출력: ");
	for (int i = 0; i < len; i++) {
		if (a[i] % 2 != 0) {
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

// 짝수만 출력하는 함수
void Even(int *b, int len) {
	printf("짝수 출력: ");
	for (int i = 0; i < len; i++) {
		if (b[i] % 2 == 0) {
			printf("%d, ", b[i]);
		}
	}
	printf("\n");
}