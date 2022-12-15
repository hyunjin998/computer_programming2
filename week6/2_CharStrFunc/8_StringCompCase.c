#include <stdio.h>
#include <string.h>

int main() {
	char str1[20];
	char str2[20];

	printf("문자열 입력1: ");
	scanf("%s", str1);
	printf("문자열 입력2: ");
	scanf("%s", str2);

	// str1과 str2가 동일하면 거짓을 의미하는 0이 반환됨
	// 이 반환 값을 대상으로 ! 연산을 하였으니 거짓은 참으로 바뀜
	// 즉, str1과 str2의 문자열이 완벽히 동일할 때 참이 됨
	if (!strcmp(str1, str2)) puts("두 문자열은 완벽히 동일합니다.");
	else {
		puts("두 문자열은 동일하지 않습니다.");

		// 두 문자열이 일치하지 않는 경우에 한해 실행됨
		// strncmp 함수의 세 번째 인자로 3이 전달되었으니,
		// 앞의 세 문자가 동일한 경우에 한해 if문이 참이 되어 실행됨
		if (!strncmp(str1, str2, 3)) puts("그러나 앞 세 글자는 동일합니다.");
	}
	return 0;
}