#include <stdio.h>

int main() {
	char str1[] = "My String"; // 변수 형태의 문자열
	char* str2 = "Your String"; // 상수 형태의 문자열
	printf("%s %s\n", str1, str2); // My String Your String

	str2 = "Our String"; // 가리키는 대상 변경
	printf("%s %s\n", str1, str2); // My String Our String

	str1[0] = 'X'; // 문자열 변경 성공
	str2[0] = 'X'; // 문자열 변경 실패

	// 컴파일러나 컴파일 모드에 따라서
	// 프로그램이 종료되거나
	// 연산이 무시되어 문자열이 변경되지 않을 것
	printf("%s %s\n", str1, str2);

	return 0;
}