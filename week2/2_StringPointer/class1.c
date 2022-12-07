#include <stdio.h>

// 5. 문자열 표현
int main() {
	char str1[] = "HELLO";
	char* str2 = "WORLD"; // 문자열 리터럴이 있는 곳의 주소만 저장

	printf("%s %s\n", str1, str2); // HELLO WORLD

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2); // HELLO EVERYONE

	str1[1] = 'A'; // HALLO, 변수 CH 안에 'A'가 그대로 저장됨
	str2[0] = 'A'; // 컴파일 실행 안 됨
	printf("%s %s\n", str1, str2);

	return 0;
}