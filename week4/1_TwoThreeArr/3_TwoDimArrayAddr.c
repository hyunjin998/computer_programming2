#include <stdio.h>

int main() {
	int arr[3][2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
			printf("%p\n", &arr[i][j]); // 주소값, int형 변수의 크기인 4바이트만큼 차이가 남
	}
	return 0;
}