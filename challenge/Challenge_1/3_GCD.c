// 두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램

#include <stdio.h>

int main() {
	int num1, num2;
	printf("Input 2 integer: ");
	scanf_s("%d %d", &num1, &num2); // 두 개의 정수를 입력 받음


	// 두 수를 비교
	int min, max;
	if (num1 < num2) {
		min = num1;
		max = num2;
	}

	else {
		min = num2;
		max = num1;
	}


	// 구구단 출력
	int divisor = 1;
	for (int i = 2; i < min + 1; i++)
		if (min % i == 0 && max % i == 0) divisor = i;
	printf("GCD is %d\n", divisor);
	return 0;
}