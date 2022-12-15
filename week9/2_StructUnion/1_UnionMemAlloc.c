#include <stdio.h>

typedef struct sbox { // 구조체 sbox 정의
	int mem1;
	int mem2;
	double mem3;
} SBox;


typedef union ubox { // 공용체 union 정의
	int mem1;
	int mem2;
	double mem3;
} UBox;


int main() {
	SBox sbx;
	UBox ubx;
	printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	
	printf("%d %d\n", sizeof(SBox), sizeof(UBox)); // 16, 모든 멤버의 크기를 합한 결과
												   //  8, 멤버 중에서 가장 크기가 큰 double 크기만 계산

	return 0;
}