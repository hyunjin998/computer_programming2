#include <stdio.h>

int main() {
	char str[50] = "I like C programming";
	printf("string: %s\n", str); // I like C programming

	str[8] = '\0'; // 9번째 요소에 널 문자 저장
	printf("string: %s\n", str); // I like C

	str[6] = '\0'; // 7번째 요소에 널 문자 저장
	printf("string: %s\n", str); // I like

	str[1] = '\0'; // 2번째 요소에 널 문자 저장
	printf("string: %s\n", str); // I

	return 0;
}