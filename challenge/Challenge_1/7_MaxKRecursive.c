/* 프로그램 사용자로부터 숫자 n을 입력 받는다.
그리고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해 보자.
2^k <= n

(실행 예)
상수 n 입력: 256
공식을 만족하는 k의 최댓값은 8
*/

#include <stdio.h>
int MaxK(int a); // k의 최댓값 구하는 함수


int main() {
	int n;
	printf("상수 n 입력: ");
	scanf_s("%d", &n);
	
	printf("공식을 만족하는 k의 최댓값은 %d\n", MaxK(n));
	return 0;
}


int result = 2;
int k = 0;
int MaxK(int a) { // k의 최댓값 구하는 함수
	if (result > a) return k;
	else {
		result *= 2;
		k++;
		MaxK(a);
	}
}