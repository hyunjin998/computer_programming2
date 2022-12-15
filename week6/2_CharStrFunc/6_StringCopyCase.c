#include <stdio.h>
#include <string.h>

int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];


	/**** case 1 ****/
	strcpy(str2, str1); // str1의 문자열을 str2에 복사
	puts(str2); // 1234567890


	/**** case 2 ****/
	// str1에 저장된 문자열을 str2에 복사하되,
	// str1의 길이가 매우 길다면, sizeof(str2)가 반환한 값에 해당하는 문자의 수 만큼만 복사를 진행
	strncpy(str3, str1, sizeof(str3));
	puts(str3); // 12345엉뚱
				// 널 문자가 존재해야 널 문자 이전까지 출력하는데
				// 널 문자가 존재하지 않아 엉뚱한 영역까지 출력됨


	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3); // 1234

	return 0;
}