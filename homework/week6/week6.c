#include <stdio.h>
#include <stdlib.h>  // rand()함수를 포함하는 라이브러리
#include <time.h>   // time()함수를 포함하는 라이브러리
int RockSissorsPaper();


int main() {
	char str[10];
	int user;
	int cnt = 0, win = 0;
	int result = 1;
	char computerStr[10];


	while (result != 0) {
		printf("바위는 1, 가위는 2, 보는 3 : ");
		fgets(str, sizeof(str), stdin);

		if (str == "바위") user = 1;
		else if (str == "가위") user = 2;
		else if (str == "보") user = 3;


		int computer = RockSissorsPaper();


		printf("당신은 %s 선택, 컴퓨터는 %s 선택\n", (char)str, computerStr);

		if (computer = 1) puts("바위");
		else if (computer = 2) puts("가위");
		else if (computer = 3) puts("보");


		if (user == computer) puts("비겼습니다.\n");
		else if (user > computer) {
			puts("당신이 이겼습니다.\n");
			win++;
		}

		else {
			puts("당신이 졌습니다.\n");
			puts("게임의 결과: %d승, %d무\n", win, cnt);

			result = 0;
		}
		cnt++;
	}

	return 0;
}


int RockSissorsPaper() {
	srand(time(NULL)); // 매번 다른 난수가 발생하도록 하기 위해서 사용
	int random = 0;
	for (int i = 0; i < 10; i++) {
		random = rand() % 3;          // 가위, 바위, 보를 위한 3개의 난수 생성
	}
	return random;
}