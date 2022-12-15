#include <stdio.h>
#include <string.h>


int main() {
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";


	/**** case 1 ****/
	// str2에 저장된 문자열을 덧붙일 수 있을 만큼의 충분한 공간이 str1에 있어야 함
	strcat(str1, str2);
	puts(str1); // First~Second


	/**** case2 ****/
	// str4에 저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙이되 7개의 문자만 덧붙인다.
	// 따라서 널 문자를 포함해 8개의 문자가 덧붙여진다.
	strncat(str3, str4, 7);
	puts(str3); // Simple num: 1234567
	return 0;
}