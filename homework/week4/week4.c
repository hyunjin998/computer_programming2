#include <stdio.h>
void Question();
void DogCat(char **dpa, char **dpb); // 2
void Vowel(char(*a)[10]); // 3


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			// 최대 10글자인 동물이름 4개를 저장할 수 있는 2차원 배열 선언,
			// 선언과 동시에 dog, cat, horse, elephant로 초기화하는 방법 2가지
			char animal[4][10] = { "dog", "cat", "horse", "elephant" };
			char animal2[][10] = { "dog", "cat", "horse", "elephant" };

			for (int i = 0; i < 4; i++) {
				printf("animal[%d]: %s\n", i, animal[i]);
				printf("animal2[%d]: %s\n\n", i, animal[i]);
			}
			break;
		}


		case 2: {
			char* pa = "dog";
			char* pb = "cat";

			printf("pa: %s pb: %s\n", pa, pb); // 함수 호출 전 dog, cat 출력
			DogCat(&pa, &pb);
			printf("pa: %s pb: %s\n", pa, pb); // 함수 호출 후 cat, dog 출력
			break;
		}


		case 3: {
			char arr[2][10];
			for (int i = 0; i < 2; i++) {
				printf("Input: ");
				scanf_s("%s", &arr[i], 10); // 사용자로부터 소문자로 된 단어 2개를 입력 받아 배열에 저장
			}

			Vowel(arr);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("================================================\n");
	printf("1. dog, cat, horse, elephant\n"); // 2차원 배열을 초기화하는 방법 2가지
	printf("2. dog <-> cat\n"); // 이중포인터를 사용해 dog와 cat이 바뀌도록 하는 함수
	printf("3. \n");
	printf("4. 2 4 6 ... 100\n"); // 2의 배수 번째 위치해 있는 값만 출력하는 함수 호출
	printf("================================================\n");
	printf("Select option: ");
}


// 2. 이중포인터를 사용해 dog와 cat이 바뀌는 함수
void DogCat(char **dpa, char **dpb) {
	char* tmp = *dpa;
	*dpa = *dpb;
	*dpb = tmp;
}


// 3. 단어를 전달받아, 각각의 단어에 모음이 몇 번 나오는지 출력하는 함수
void Vowel(char(*a)[10]) {
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i][j] == 'a' || a[i][j] == 'e' || a[i][j] == 'i' || a[i][j] == 'o' || a[i][j] == 'u'){
				if (i == 0) cnt1++;
				else cnt2++;
			}
		}
	}
	printf("%d %d\n", cnt1, cnt2);
}