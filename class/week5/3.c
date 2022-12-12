/* 1. 철희, 철수, 영희, 영수 네 사람 각각의 국어, 영어, 수학, 국사 과목 성적과
개인별 총점, 과목별 총점을 저장할 수 있는 5X5 배열을 선언합니다.
2. 네 사람의 과목 점수를 입력 받아 배열에 저장합니다.(4명x4과목=총16개의 정수)
3. 개인별, 과목별 총점을 계산하여 배열에 저장합니다.
4. 저장된 값을 출력합니다.
*/




#include <stdio.h>

int main() {
	// 1
	int arr[5][5] = { 0 };
	int i, j;


	// 2
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}


	// 3
	int row = 0, col = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
			arr[4][i] += arr[j][i];
		}
		row += arr[i][4];
		col += arr[4][i];
	}


	// 4
	arr[4][4] = (row + col) / 2;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}