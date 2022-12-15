#include <stdio.h>

int main() {
	char* str = "Simple String";


	// puts 함수의 호출
	// 문자열이 선언된 위치에는 문자열의 주소 값이 반환디므로, 두 경우 모두 문자열의 주소 값이 전달됨
	printf("1. puts test ------\n");
	puts(str); // Simple String
	puts("So Simple String"); // So Simple String

	// fputs 함수의 호출
	// 두 번째 인자로 stdout이 전달되었으니, 모니터로 출력이 됨
	// fputs 함수는 별도의 개행 작업이 이루어지지 않기 때문에 \n을 추가
	printf("2. fputs test -----\n");
	fputs(str, stdout); printf("\n"); // Simple String
	fputs("So Simple String", stdout); printf("\n"); // So Simple string

	printf("3. end of main ----\n");
	return 0;
}