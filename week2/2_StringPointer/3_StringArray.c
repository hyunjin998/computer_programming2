#include <stdio.h>

int main() {
	char* strArr[3] = { "Simple", "String", "Array" }; // 길이가 3인 char형 포인터 배열
	printf("%s\n", strArr[0]); // Simple
	printf("%s\n", strArr[1]); // String
	printf("%s\n", strArr[2]); // Array

	return 0;
}