#include <stdio.h>

int main() {

	// 파일 src.txt를 읽기 모드로, 파일 dst.txt를 쓰기 모드로 개방
	// src.txt의 내용을 dst.txt라는 이름의 파일을 생성해서 복사하기 위함
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");

	int ch;

	if (src == NULL || des == NULL) {
		puts("파일오픈 실패!\n");
		return -1;
	}

	// 파일의 내용을 한 문장씩 복사
	// fgetc 함수가 EOF를 반환할 때까지 계속되는데,
	// fgetc 함수는  파일의 끝에 도달해서 더 이상 읽을 데이터가 없거나
	// 오류가 발생하는 경우에 EOF를 반환
	while ((ch = fgetc(src)) != EOF) fputc(ch, des);


	// 오류가 발생하는 경우에도 EOF가 반환되기 때문에
	// fgetc 함수가 EOF를 반환했다고 해서 무조건 파일의 끝에 도달한 것은 아님
	if (feof(src) != 0) puts("파일복사 완료!");
	else puts("파일복사 실패!");

	fclose(src);
	fclose(des);

	return 0;
}