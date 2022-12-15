#include <stdio.h>

int main() {
	
	// arr1, arr2, arr3 모두 int형 2차원 배열잉면서 가로의 길이가 동일하니,
	// 이들 배열이름의 포인터 형은 모두 동일
	int arr1[2][2] = {
		{1, 2}, {3, 4}
	};

	int arr2[3][2] = {
		{1, 2}, {3, 4}, {5, 6}
	};

	int arr3[4][2] = {
		{1, 2}, {3, 4}, {5, 6}, {7, 8}
	};

	int(*ptr)[2]; // 위에 선언된 배열의 이름과 형이 같은 포인터 변수를 선언
	int i;

	ptr = arr1; // 배열의 이름과 ptr의 포인터 형이 일치하므로 경고 발생 X
	printf("** Show 2, 2 arr1 **\n");
	for (i = 0; i < 2; i++)
		// 2차원 배열을 가리키는 포인터 변수를 이용해 2차원 배열의 형태로 접근
		printf("%d %d\n", ptr[i][0], ptr[i][1]);

	ptr = arr2;
	printf("** Show 3, 2 arr1 **\n");
	for (i = 0; i < 3; i++)
		printf("%d %d\n", ptr[i][0], ptr[i][1]);

	ptr = arr3;
	printf("** Show 4, 2 arr1 **\n");
	for (i = 0; i < 4; i++)
		printf("%d %d\n", ptr[i][0], ptr[i][1]);

	return 0;
}