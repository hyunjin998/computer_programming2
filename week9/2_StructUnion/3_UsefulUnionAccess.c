#include <stdio.h>

// 두 개의 unsigned short형 변수를 멤버로 지니는 4바이트 크기의 구조체 정의
typedef struct dbshort {
	unsigned short upper;
	unsigned short lower;
} DBShort;


// 정의된 공용체의 모든 멤버의 크기가 4바이트이므로,
// 이 공용체의 변수를 선언하면 4바이트가 할당됨
typedef union rdbuf {
	int iBuf;
	char bBuf[4];
	DBShort sBuf; // 공용체의 멤버로 구조체 변수를 선언
} RDBuf;


int main() {
	RDBuf buf;
	printf("정수 입력: ");


	// iBuf라는 이름의 int형으로 선언된 멤버를 이용해,
	// 4바이트 크기의 공용체 변수에 정수를 입력 받음
	scanf_s("%d", &(buf.iBuf));


	// 상위 2바이트와 하위 2바이트 값을 각각 양의 정수형태로 출력
	printf("상위 2바이트: %u\n", buf.sBuf.upper);
	printf("상위 2바이트: %u\n", buf.sBuf.lower);

	// 상위 1바이트와 하위 1바이트의 값을 각각 아스키 코드 문자로 출력
	printf("상위 1바이트 아스키 코드: %c\n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c\n", buf.bBuf[3]);

	return 0;
}