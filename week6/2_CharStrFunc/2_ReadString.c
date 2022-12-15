#include <stdio.h>

int main() {
	char str[7];
	
	for (int i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s\n", i + 1, str);
	}
	return 0;
}