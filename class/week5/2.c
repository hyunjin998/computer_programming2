/* 배열 A와 배열 B를 선언합니다.
배열A는 선언과 동시에 다음 표에 있는대로 초기화를 합니다.

배열 A
1 2 3 4
5 6 7 8

그리고 배열 B는 배열 A에 저장된 값의 행과 열을 바꾸어서(tranpose) 값을 넣어줍니다.
즉, 배열 B는 4행 2열짜리 배열입니다.

배열 B
1 5
2 6
3 7
4 8
*/


#include <stdio.h>

int main() {
	int a[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 }; // 배열 A 선언과 동시에 초기화
	int b[4][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			b[j][i] = a[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}