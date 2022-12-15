#include <stdio.h>


// 세 번째 인자로 반환형이 int이고 두 개의 int형 변수가 매개변수로 선언된 함수의 이름 (함수의 주소 값)이 전달
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) {
	return cmp(age1, age2); // 첫 번째, 두 번째 인자를 재전달하면서 세 번째 인자로 함수를 호출
							// 그리고 이 때 반환되는 값을 재반환
							// 결과적으로 세 번째 인자로 어떠한 함수의 주소 값이 전달되느냐에 따라서
							// 함수 WhoIsFirst의 동작방식이 결정됨
}


// 인자로 전달된 두 정수 중 큰 정수의 값을 반환하는 함수
int OlderFirst(int age1, int age2) {
	if (age1 > age2) return age1;
	else if (age1 < age2) return age2;
	else return 0;
}


// 인자로 전달된 두 정수 중 작은 정수의 값을 반환하는 함수
int YoungerFirst(int age1, int age2) {
	if (age1 < age2) return age1;
	else if (age1 > age2) return age2;
	else return 0;
}


int main() {
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장순서 1\n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장!\n\n", age1, age2, first); // 20 30 30

	printf("입장순서 2\n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장!\n\n", age1, age2, first); // 20 30 20

	return 0;
}