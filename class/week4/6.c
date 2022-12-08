/* 회문(Palindrome)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다.
예를 들어서 level, bob과 같은 단어들은 회문에 속한다.
이에 우리는 인자로 전달되는 영단어가 회문인지 아닌지를 판단해서
그 결과를 출력하는 기능의 함수를 정의하고 이에 적절한 main 함수를 정의해 보고자 한다.

단, 구현의 편의를 위해 대소문자까지 일치해야 회문으로 인정하기로 하겠다

(실행 예)
문자열 입력: noon
회문 입니다.
*/


#include <stdio.h>
void Palindrome(char a[], int len);


int main() {
	char str[20];
	printf("문자열 입력: ");
	scanf_s("%s", str, 20);

	int cnt = 0;
	while (str[cnt] != 0) cnt++;
	Palindrome(str, cnt);
	return 0;
}


void Palindrome(char a[], int len) {
	for (int i = 0; i < len; i++) {
		if (a[i] == a[len - 1 - i]) {
			if (i >= len - i) {
				printf("회문입니다.\n");
				break;
			}
		}
		else {
			printf("회문이 아닙니다.\n");
			break;
		}
	}
}