#include <stdio.h>
int main() {
	int num = 1;

	if (num == 1) {
		// int num = 7;
		// 주석처리 할 경우: if num = 11, main num = 11
		// 주석처리 안 할 경우: if num = 17, main num = 1
		num += 10;
		printf("if문 내 지역변수 num: %d\n", num);
	}

	printf("main 함수 내 지역변수 num: %d\n", num);
	return 0;
}
