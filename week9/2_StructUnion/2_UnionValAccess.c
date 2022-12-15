#include <stdio.h>

typedef union ubox { // 공용체 ubox 정의
	int mem1;
	int mem2;
	double mem3;
} UBox;


int main() {
	UBox ubx; // 8바이트 메모리 할당
	ubx.mem1 = 20; // 상위 4바이트의 메모리 공간에 20 저장

	// mem2는 int형 변수이므로 이 이름으로 접근할 경우
	// 상위 4바이트의 메모리 공간을 참조하게 되지만
	// 앞서 이 공간에 20을 저장했으므로 20 출력
	printf("%d\n", ubx.mem2); // 20

	// mem3에 실수를 저장, 저장된 값 덮어쓰기
	ubx.mem3 = 7.15;

	// 덮어써버려서 상위 4바이트를 읽어 알 수 없는 값이 출력됨
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%d\n", ubx.mem3); // 7.15
	
	return 0;
}