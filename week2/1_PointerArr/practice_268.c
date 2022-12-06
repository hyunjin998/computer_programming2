#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.268
			char str[20];
			printf("string: ");
			scanf_s("%s", str, 20); // 프로그램 사용자로부터 하나의 영단어를 입력 받음
			
			int idx;
			for (idx = 0; str[idx] != '\0'; idx++) { // 입력 받은 영단어의 길이를 계산해 출력

			}
			printf("%d\n", idx);
			break;
		}

		case 2: { // p.268
			char str[20];
			printf("string: ");
			scanf_s("%s", str, 20); // 프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장

			int len;
			for (len = 0; str[len] != '\0'; len++) { // 입력 받은 영단어의 길이를 계산해 출력

			}
		
			// 배열에 저장된 영단어를 역순으로 뒤집기
			// 널 문자의 위치 변경 없음
			for (int i = 0; i < len - 1 - i; i++) {
				int tmp;
				tmp = str[len - 1 - i];
				str[len - 1 - i] = str[i];
				str[i] = tmp;
			}

			printf("reverse: %s\n", str); // 제대로 뒤집혔는지 확인 출력
			break;
		}

		case 3: { // p.268
			char str[20];
			printf("string: ");
			scanf_s("%s", str, 20); // 프로그램 사용자로부터 영단어를 입력 받음
			
			int idx;
			for (idx = 0; str[idx] != '\0'; idx++) {
			}

			// 입력 받은 영단어를 구성하는 문자 중에서
			// 아스키 코드 값이 가장 큰 문자를 찾아내기
			int big;
			for (int i = 0; idx - 1 - i > i; i++) {
				if (str[i] > str[idx - 1 - i]) big = str[i];
				else big = str[idx - 1 - i];
			}

			printf("%c\n", big); // 출력
			break;
		}
		}
	}
}


void Question() {
	printf("===============================\n");
	printf("1. string length\n");
	printf("2. string reverse\n");
	printf("3. biggest character\n");
	printf("==============================\n");
	printf("Select option: ");
}