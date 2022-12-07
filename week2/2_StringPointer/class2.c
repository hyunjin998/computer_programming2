#include <stdio.h>

// 6. 포인터 배열
int main() {
	char* arr2[4] = { "SPRING", "SUMMER", "FALL", "WINTER" };

	// char *arr2[]로 선언할 수도 있다.
	printf("%s\n", arr2[0]); // SPRING
	printf("%s\n", arr2[1]); // SUMMER
	printf("%s\n", arr2[2]); // FALL
	printf("%s\n", arr2[3]); // WINTER

	return 0;
}