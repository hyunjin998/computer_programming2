#include <stdio.h>

int AddToTotal(int num) {
	static int total; // total = 0
	total += num;
	return total;
}

int main() {
	int num, i; // num, i = 쓰레기값
	for (i = 0; i < 3; i++) {
		printf("입력: %d", i + 1);
		scanf_s("%d", &num);
		printf("누적: %d\n", AddToTotal(num));
	}

	return 0;
}
