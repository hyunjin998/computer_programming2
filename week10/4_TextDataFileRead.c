#include <stdio.h>

int main() {
	char str[30];
	int ch;
	
	// simple.txt의 데이터는 텍스트 모드상에서 저장되었으므로
	// 입력 스트림을 형성할 때도 텍스트 모드로 형성
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}


	// 데이터가 입력된 순서와 형태대로 읽음
	// 문자 두 개를 먼저 읽고 나서 문자열 두 개를 읽음
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
	return 0;
}