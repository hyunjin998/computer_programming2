/* 10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자.
참고로 정수 num이 1과 num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다.
따라서 3은 소수이다. 그러나 4는 소수가 아니다. 1, 2, 4로 나눠지기 때문이다.

(실행 예)
2 3 5 7 11 13 17 19 23 29
*/


#include <stdio.h>

int main() {
	int primeNum; // 소수
	int cnt = 0; // 소수 10개만 출력하기 위해 카운트

	for (int num = 2; cnt < 10; num++) {
		int j = 0; // num이 소수임을 판별하기 위해 카운트
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) { // num의 약수 찾는 과정
				primeNum = i; // primeNum에 num의 약수 대입
				j++;

				if (j > 3) break; // 소수의 약수는 2개이므로 약수가 2개가 넘어가면 탈출
			}
		}
		if (j == 2) {
			printf("%d ", num); // 소수 출력
			cnt++; // 소수 10개만 출력하기 위해 카운트
		}
	}
	printf("\n");
	return 0;
}