#include <stdio.h>

int main() {
	int ch1, ch2;

	// 키보드로부터 각각 하나의 문자를 입력 받음
	// 두 문장이 하는 일은 완전히 동일
	ch1 = getchar(); // 문자 입력
	ch2 = fgetc(stdin); // 엔터 키 입력


	// 모니터로 각각 하나의 문자를 출력
	// 둗 문장이 하는 일은 완전히 동일
	putchar(ch1); // 문자 출력
	fputc(ch2, stdout); // 엔터 키 출력
	
	return 0;
}