#include <stdio.h>

int Add(int val);
int num = 1;

int main() {
	int num = 5;
	printf("num: %d\n", Add(3)); // num = 12
	printf("num: %d\n", num + 9); // num = 14
	return 0;
}

int Add(int val) {
	int num = 9;
	num += val; // num = 9 + 3
	return num;
}
