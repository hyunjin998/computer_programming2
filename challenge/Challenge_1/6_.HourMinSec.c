/* 프로그램 사용자로부터 초(second)를 입력 받은 후에,
이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.

(실행 예)
초(second) 입력: 3615
[h:1, m:0, s:15]
*/

#include <stdio.h>
void Time(int a); // 입력 받은 초(second)를 [시, 분, 초]의 형태로 출력하는 함수


int main() {
	int sec;
	printf("초(second) 입력: ");
	scanf_s("%d", &sec);

	Time(sec);
	return 0;
}


void Time(int a) { // 입력 받은 초(second)를 [시, 분, 초]의 형태로 출력하는 함수
	int hour, minute;

	hour = a / 60 / 60;
	minute = (a - hour * 60 * 60) / 60;
	a -= hour * 60 * 60 + minute * 60;

	printf("[h:%d, m:%d, s:%d\n", hour, minute, a);
}