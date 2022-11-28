
// 두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램

#include <stdio.h>
int NumCompare(int a, int b); // 두 수 비교 함수
int GCD(int c, int d); // Greatest Common Divisor, 최대 공약수 구하는 함수


int main() {
	int num1, num2;
	printf("Input 2 integer: ");
	scanf_s("%d %d", &num1, &num2); // 두 개의 정수를 입력 받음
	
	NumCompare(num1, num2);
	
	return 0;
}


int NumCompare(int a, int b) { // 두 수 비교 함수
	int min, max;
	if (a < b) {
		min = a;
		max = b;
	}

	else {
		min = b;
		max = a;
	}

	return GCD(min, max); // 구구단 출력 함수
}


int GCD(int c, int d) {// 최대 공약수 구하는 함수
	int divisor = 1;
	for (int i = 2; i < c + 1; i++)
		if (c % i == 0 && d % i == 0) divisor = i;

	printf("GCD is %d\n", divisor);
}