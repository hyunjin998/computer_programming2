/* 배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의하자.
(함수의 이름은 DesSort로 정의하자.)
그리고 이 함수들을 호출하는 예제를 작성해보자.

프로그램의 흐름은 다음과 같이 구성을 하자.
일단 길이가 7인 int형 배열을 선언해서 프로그램 사용자로부터 7개의 정수를 입력 받도록 하자.
그리고 입력 받은 정수를 내림차순으로 정렬하기 위해서,
배열을 인자로 전달하면서 DesSort 함수를 호출하자.
그리고 마지막으로 제대로 정렬이되었는지 확인하기 위해서 배열의 요소들을 순서대로 출력해보자.

(실행 예)
입력: 1
입력: 2
...
입력: 7
7 6 5 4 3 2 1
*/

#include <stdio.h>
void DesSort(int *a, int len);


int main() {
	int num[7]; // 길이가 7인 int형 배열 선언
	int numLen = sizeof(num) / sizeof(int);

	for (int i = 0; i < numLen; i++) {
		printf("입력: ");
		scanf_s("%d", &num[i]); // 7개의 정수를 입력 받음
	}

	DesSort(num, numLen);
	return 0;
}


void DesSort(int *a, int len) {
	int tmp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}