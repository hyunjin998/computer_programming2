#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.348
			int arr[3][9]; // 가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열 선언

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 9; j++) {
					arr[i][j] = (i + 2) * (j + 1); // 2단 3단, 4단
					printf("%d ", arr[i][j]);
				}
				printf("\n");
			}
			break;
			}


		case 2: { // p.349
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
			break;
		}


		case 3: { // p.349
			int arr[5][5] = { 0 }; // 배열 미리 선언
			int i, j;


			for (i = 0; i < 4; i++) { // 국어, 영어, 수학, 국사
				for (j = 0; j < 4; j++) { // 철희, 철수, 영희, 영수
					scanf_s("%d", &arr[i][j]); // 미리 선언해 놓은 배열에 값 저장
				}
			}


			int row = 0, col = 0; // row, column
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					arr[i][4] += arr[i][j]; // 학생 평균
					arr[4][i] += arr[j][i]; // 과목 평균
				}
				row += arr[i][4]; // 개인별 총점 계산
				col += arr[4][i]; // 과목별 총점 계산
			}


			arr[4][4] = (row + col) / 2; // 총점
			for (i = 0; i < 5; i++) { // 국어, 영어, 수학, 국사
				for (j = 0; j < 5; j++) { // 철희, 철수, 영희, 영수
					printf("%d ", arr[i][j]);
				}
				printf("\n");
			}
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("===============================\n");
	printf("1. GuGuDan\n");
	printf("2. Celsius to Fahrenheit\n");
	printf("3. Fibonacci\n");
	printf("==============================\n");
	printf("Select option: ");
}