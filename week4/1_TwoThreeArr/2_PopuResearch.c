#include <stdio.h>

int main() {
	int villa[4][2]; // 빌라의 형태와 동일한 구조로 2차원 배열 선언

	// 가구별 거주인원 입력 받기
	for (int i = 0; i < 4; i++) { // 중첩된 반복문을 통해 가구별 인구수를 입력 받음
		for (int j = 0; j < 2; j++) {
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j]);
		}
	}

	// 빌라의 층별 인구수 출력하기
	for (int i = 0; i < 4; i++) { // 층별 인구수를 출력하기 위한 반복문
		int popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구수: %d\n", i + 1, popu);
	}

	return 0;
}