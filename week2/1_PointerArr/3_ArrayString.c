#include <stdio.h>

int main() {
	char str[] = "Good morning!"; // char형 배열을 선언하고 이를 문자열로 초기화함.
								  // 배열의 길이 정보가 생략되었으나,
								  // 컴파일러는 문자열의 길이를 계산해 배열의 길이를 결정함
	printf("배열 str의 크기: %d\n", sizeof(str)); // 배열의 크기 출력, 14
	
	// 문자열의 끝에 자동으로 삽입되는 널 문자의 정체를 확인하기 위해
	// 널 문자를 문자와 정수의 형태로 출력
	printf("널 문자 문자형 출력: %c\n", str[13]); //
	printf("널 문자 정수형 출력: %d\n", str[13]); // 0

	str[12] = '?'; // 문자열은 배열에 담겨있으므로 문자열의 일부 변경 가능
	
	printf("문자열 출력: %s\n", str); // Good morning?
	return 0;
}