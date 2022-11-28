/* 필자가 좋아하는 것 중 하나가 금요일 저녁 퇴근길에 DVD나 만화책을 잔뜩 빌리고,
동네 슈퍼에 들려서 군것질거리를 사가지고 집에 들어가는 것이다. 오늘은 금요일이다.
현재 필자의 주머니에는 5천원이 있다. DVD 한편을 빌리면 3,500원이 남는다.
슈퍼에 들려서 크림빵(500원), 새우깡(700원), 콜라(400원)를 사려한다.
잔돈을 하나도 남기지 않고 이 세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가?

(실행 예)
현재 당신이 소유하고 있는 금액 :
크림빵 1개, 새우깡 2개, 콜 라 4개
크림빵 2개, 새우깡 3개, 콜 라 1개
크림빵 4개, 새우깡 1개, 콜 라 2개
어떻게 구입하시겠습니까?
*/

#include <stdio.h>

int main() {
	int exchange = 5000;
	int dvd = 1500;
	exchange -= dvd;

	printf("현재 당신이 소유하고 있는 금액: %d\n", exchange);
	for (int bread = 1; bread * 500 <= exchange; bread++) {
		for (int snack = 1; snack * 700 <= exchange; snack++) {
			for (int coke = 1; coke * 400 <= exchange; coke++)
				if (bread * 500 + snack * 700 + coke * 400 == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", bread, snack, coke);
		}
	}
	printf("어떻게 구입하시겠습니까?\n");
	return 0;
}