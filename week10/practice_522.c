#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p. 522

			FILE* fp = fopen("mystory.txt", "wt");
			if (fp == NULL) {
				puts("파일오픈 실패");
				return -1;
			}

			fputs("#이름: 김현진\n", fp);
			fputs("#주민번호: 990130-2\n", fp);
			fputs("#전화번호: 010-2749-2\n", fp);

			fclose(fp);
			break;
		}


		case 2: {
			FILE* fp = fopen("mystroy.txt", "wt");
			if (fp == NULL) {
				puts("파일오픈 실패");
				return -1;
			}

			if (feof(fp) == 0) {
				fputs("#즐겨먹는 음식: 떡볶이\n", fp);
				fputs("#취미: 코딩\n", fp);
			}

			fclose(fp);
			break;
		}
		}
	}
	return 0;
}

void Question() {
	printf("========================================\n");
	printf("1. int **parr1 = arr1, int (*arr2)[5] = arr2\n");
	printf("2. int *a, int *b, int (*c)[4], int (*d)[4]\n");
	printf("3. int **a, int *(*b)[5], int ***c, int ***(*d)[5]\n");
	printf("4. 3 2 6 4 5 2 1 1\n");
	printf("1. CallByValue, CallByReference\n");
	printf("========================================\n");
	printf("Select option: ");
}
