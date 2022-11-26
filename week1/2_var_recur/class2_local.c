#include <stdio.h>

int main() {
	int cnt; // 지역변수
	int num = 0;

	for (cnt = 0; cnt < 3; cnt++) {
		int num = 0; // 지역변수
		num++;
		printf("%d번째 반복, 지역변수 num은 %d\n", cnt + 1, num);
	}

	if (cnt == 3) {
		int num = 7; // 지역변수
		num++;
		printf("if문 내에 존재하는 지역변수 num은 %d\n", num); // num = 8
	}

	num = 10;
	printf("num은 %d\n", num); // num = 10

	return 0;
}