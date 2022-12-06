#include <stdio.h>

int main() {
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str, 50); // 문자열을 입력 받아서 배열 str에 저장, str 앞에 &연산자 삽입하지 않음
	printf("입력 받은 문자열: %s\n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0') { // scanf 함수호출을 통해 입력 받은 문자열의 긑에도 널문자가 삽입돼 있음
							   // C언어에서 표현하는 모든 문자열의 끝에는 널 문자가 자동으로 삽입됨
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	
	return 0;
}