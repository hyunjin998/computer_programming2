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