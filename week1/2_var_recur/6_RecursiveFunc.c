#include <stdio.h>

void Recursive(int num) {
	if (num <= 0) // Àç±Í Å»ÃâÁ¶°Ç
		return; // Àç±Í Å»Ãâ
	printf("Recursive call! %d\n", num);
	Recursive(num - 1);
}


int main() {
	Recursive(3);
	return 0;
}