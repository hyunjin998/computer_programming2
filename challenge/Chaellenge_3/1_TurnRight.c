/* 길이가 4 * 4인 int형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와 동일하게 초기화하자.
그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 그 결과를 출력하는 프로그램을 작성해 보자.
참고로 배열이 변경되는 형태는 다음과 같다.

(예)
 1  2  3  4		13  9  5  1		16 15 14 13		4  8  12 16
 5  6  7  8		14 10  6  2		12 11 10  9		3  7  11 15
 9 10 11 12		15 11  7  3		 8  7  6  5		2  6  10 14
13 14 15 16		16 12  8  4		 4  3  2  1		1  5   9 13
*/


#include <stdio.h>
void Question();
void CurArr(int(*parr)[4], int column);
void PrintfArr(int(*parr2)[4], int column);


int main() {
	int arr[4][4];
	printf("기본 배열의 형태\n");
	CurArr(arr, sizeof(arr) / sizeof(arr[0]));

	while (1) {
		Question();

		int num, cnt = 1;
		scanf_s("%d", &num);

		switch (num) {
		case 1: {
			for (int j = 3; j >= 0; j--){
				for (int i = 0; i < 4; i++)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 2: {
			for (int i = 3; i >= 0; i--) {
				for (int j = 3; j >= 0; j--)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 3: {
			for (int j = 0; j < 4; j++) {
				for (int i = 3; i >= 0; i--)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 4: {
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++)
					arr[i][j] = cnt++;
			}
			PrintfArr(arr, sizeof(arr) / sizeof(arr[0]));
			break;
		}

		case 5: break;
		}
	}
	return 0;
}


void Question() {
	printf("==============================\n");
	printf("기본 배열에서 몇도 회전하시겠습니까?\n");
	printf("1. 오른쪽으로 90도 회전\n");
	printf("2. 오른쪽으로 180도 회전\n");
	printf("3. 오른쪽으로 270도 회전\n");
	printf("4. 오른쪽으로 360도 회전\n");
	printf("5. 종료\n");
	printf("==============================\n");
	printf("Select option: ");
}

void CurArr(int(*parr)[4], int column) {
	int cnt = 1;
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++)
			parr[i][j] = cnt++;
	}
	PrintfArr(parr, 4);
}


void PrintfArr(int(*parr2)[4], int column) {
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", parr2[i][j]);
		printf("\n");
	}
}