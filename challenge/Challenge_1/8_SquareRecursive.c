/* 2의 n승을 구하는 함수를 재귀적으로 구현해 보자.
그리고 그에 따른 적절한 main함수도 구현해 보자.

(실행 예)
정수입력: 8
2의 8승은 256
*/

#include <stdio.h>
int SquareRecursive(int a); // 2의 n승을 구하는 재귀함수


int main() {
	int num;
	printf("정수입력: ");
	scanf_s("%d", &num);

	printf("2의 %d승은 %d\n", num, SquareRecursive(num));
	return 0;
}


int result = 2;
int SquareRecursive(int a) { // 2의 n승을 구하는 재귀함수
	if (a == 1) return result;
	else {
		result *= 2;
		return SquareRecursive(a - 1);
	}
}