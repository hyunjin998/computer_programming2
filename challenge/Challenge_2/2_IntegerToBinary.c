/* 프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음,
이를 2진수로 변환해서 출력하는 프로그램을 작성해 보자.

(실행 예)
10진수 정수 입력: 12
1100
*/

#include <stdio.h>
void IntToBinary(int *a);


int main() {
	int num;
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num); // 10진수 정수 입력 받음
	IntToBinary(&num);
	return 0;
}

void IntToBinary(int *a) { // 2진수로 변환해 출력하는 프로그램
	int quo = *a; // quotient
	int remain[8]; // remainder, 10진수이기 때문에 배열의 크기는 8
	int cnt = 0;

	for (int i = 0; quo != 0; i++) {
		remain[i] = quo % 2;
		quo /= 2;
		cnt++;
	}

	for (int j = 0; j < cnt; cnt--) {
		printf("%d", remain[cnt - 1]);
	}
	printf("\n");
}