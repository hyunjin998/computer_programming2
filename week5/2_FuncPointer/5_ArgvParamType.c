#include <stdio.h>

void ShowAllString(int argc, char* argv[]) { // argv는 char형 더블 포인터 변수
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}


int main() {
	char* str[3] = { // 1차원 배열이름의 포인터 형은 배열이름이 가리키는 대상을 통해 결정
					 // 배열이름 str이 가리키는 첫 번째 요소가 char* 형 데이터
					 // 배열이름 str의 형은 char**이므로 ShowAllString의 두 번째 인자로 전달이 가능함
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};

	ShowAllString(3, str);
	return 0;
}