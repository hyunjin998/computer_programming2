/* 프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서,
입력 받은 문자가 대문자면 이를 소문자로 변환해서 출력해주고,
입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력해주는 프로그램을 작성해보자.

단, 문자의 입출력에는 getchar함수와 putchar함수를 사용하기로 하자.
그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를 간단히 출력하기로 하자.
*/

#include <stdio.h>

int main() {
	int ch;
	ch = getchar(); // 사용자로부터 알파벳 문자 하나 입력 받음, getchar 함수 사용

	if (ch >= 65 && ch < 97) {
		ch += 32; // 대문자는 소문자로 변환해 출력
		putchar(ch);
	}

	else if (ch >= 97 && ch < 123) {
		ch -= 32; // 소문자는 대문자로 변환해 출력
		putchar(ch);
	}

	else printf("Put 'a'~'z' or 'A'~'Z'\n");
	return 0;
}