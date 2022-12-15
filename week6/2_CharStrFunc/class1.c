#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "String";
	char str2[] = "String";

	if (str1 == str2) puts("[  ==  ] equal");
	else puts("[  ==  ] not equal"); // 출력

	if (!strcmp(str1, str2)) puts("[strcmp] equal"); // 출력
	else puts("[strcmp] not eqaul");

	return 0;
}