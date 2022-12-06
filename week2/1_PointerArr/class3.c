#include <stdio.h>

// 3. 포인터를 배열의 이름처럼 사용할 수 있다.
int main() {
	int a[4] = { 100, 200, 300, 400 };
	int* p = &a[0]; // int *p = a; 와 같은 문장
	printf("a[0] p[0]: %d %d\n", a[0], p[0]); // 100 100
	printf("a[0] p[0]: %d %d\n", a[1], p[1]); // 200 200
	printf("a[0] p[0]: %d %d\n", a[2], p[2]); // 300 300
	printf("a[0] p[0]: %d %d\n", a[3], p[3]); // 400 400

	return 0;
}