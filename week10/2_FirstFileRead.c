#include <stdio.h>

int main() {
	int ch, i;

	// fopen 함수의 두 번째 인자로 rt를 전달하였으니,
	// 파일 data.txt에 저장된 데이터를 읽기 위한 스트림이 형성된다.
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	// 세 개의 문자를 읽어서 출력
	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c\n", ch);
	}
	fclose(fp);

	return 0;
}