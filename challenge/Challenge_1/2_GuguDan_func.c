/* 프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해 보자.
예를 들어서 프로그램 사용자가 3과 5를 입력하면 3단, 4단, 5단이 출력되어야 하고,
2와 4를 입력하면 2단, 3단, 4단이 출력되어야 한다.

단 한가지 조건이 있다.
사용자는 두 개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.
즉, 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.
*/

#include <stdio.h>
int NumCompare(int a, int b); // 3과 5를 입력하건 5와 3을 입력하건 똑같은 결과를 출력해주는 함수
int GuGuDan(int c, int d); // 구구단 출력 함수


int main() {
	int num1, num2;
	printf("Input 2 integers: ");
	scanf_s("%d %d", &num1, &num2); // 두 개의 정수를 입력 받음

	NumCompare(num1, num2);
	return 0;
}


int NumCompare(int a, int b) { // 3과 5를 입력하건 5와 3을 입력하건 똑같은 결과를 출력해주는 함수
	int dan_start, dan_end;
	if (a < b) {
		dan_start = a;
		dan_end = b;
	}

	else {
		dan_start = b;
		dan_end = a;
	}
	return GuGuDan(dan_start, dan_end); // 구구단 출력 함수
}


int GuGuDan(int c, int d) { // 구구단 출력 함수
	for (int i = c; i < d + 1; i++) { // i = 단
		for (int j = 2; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}