#include <stdio.h>

int main() {

	// 바이너리 모드로 파일을 개방
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	while (1) {
		// fread 함수를 이용해 파일로부터 데이터를 읽음
		// 두 번째 전달인자가 1, 세 번째 전달인자가 sizoef(buf)이니,
		// 읽어 들이는 데이터의 크기는 총 1 * sizeof(buf) 바이트
		readCnt = fread((void*)buf, 1, sizeof(buf), src);


		// fread 함수가 sizeof(buf)의 반환 값보다 작은 값을 반환했을 때 '참'
		if (readCnt < sizeof(buf)) {

			// 파일의 끝에 도달해서 sizeof(buf)의 반환 값보다 적은 수의 바이트가 읽혀졌을 때 실행되는 영역
			// 적은 수의 바이트가 읽혀졌더라도 이 역시 파일의 일부분이므로
			// fwrite 함수호출을 통해 복사해야함
			if (feof(src) != 0) {


				// 배열 buf를 꽉 채운 데이터를 그대로 파일에 저장
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일복사 완료"); break;
			}
			else puts("파일복사 실패"); break;
		}
	}
}