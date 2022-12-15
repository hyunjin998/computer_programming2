#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {

	// 문자열의 길이를 계산해 \n이 저장된 위치에 널 문자의 아스키 코드 값 0을 저장
	// 이로써 \n은 문자열에서 사라짐
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[100];
	printf("문자열 입력: ");

	// fgets 함수호출을 통해 문자열을 입력 받음
	// 따라서 \n 문자가 문자열의 일부로 포함됨
	fgets(str, sizeof(str), stdin);
	printf("길이; %d, 내용: %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s\n", strlen(str), str);
	
	return 0;
}