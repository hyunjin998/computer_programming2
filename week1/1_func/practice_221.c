#include <stdio.h>
void Question();
int maxNum(int a, int b, int c); // 가장 큰 수를 반환
int minNum(int a, int b, int c); // 가장 작은 수를 반환
float CelToFah(float cel); // 섭씨온도 -> 화씨온도로
float FahToCel(float fah); // 화씨온도 -> 섭씨온도로
void Fibonacci(int a); // 피보나치 수열


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: { // p.221
			int num1, num2, num3;
			printf("num1, num2, num3: ");
			scanf_s("%d %d %d", &num1, &num2, &num3);
			printf("Max: %d\n", maxNum(num1, num2, num3));
			printf("Min: %d\n", minNum(num1, num2, num3));
			break;
		}

		case 2: { // p.221
			float num = 0;

			while (1) {
				printf("1. Celsius -> Fahrenheit\n");
				printf("2. Fahrenheit -> Celsius\n");
				printf("input: ");
				scanf_s("%f", &num);

				if (num == 1) {
					printf("Celsius: %.2lf, Fahreheit: %.2lf\n", num, CelToFah(num));
					break;
				}

				else if (num == 2) {
					printf("Fahreheit: %.2lf, Celsius: %.2lf\n", num, FahToCel(num));
					break;
				}
			}
			break;
		}

		case 3: { // p.221
			int num;
			printf("input: ");
			scanf_s("%d", &num);
			Fibonacci(num);
			break;
		}
		}
	}
	return 0;
}

void Question() {
	printf("===============================\n");
	printf("1. max and min num\n");
	printf("2. Celsius to Fahrenheit\n");
	printf("3. Fibonacci\n");
	printf("==============================\n");
	printf("Select option: ");
}

int maxNum(int a, int b, int c) { // 가장 큰 수를 반환
	if (a > b) return (a > c) ? a : c;
	else return (b > c) ? b : c;
}

int minNum(int a, int b, int c) { // 가장 작은 수를 반환
	if (a < b) return (a < c) ? a : c;
	else return (b < c) ? b : c;
}

float CelToFah(float cel) { // 섭씨온도 -> 화씨온도
	return 9 / 5 * cel + 32;
}

float FahToCel(float fah) { // 화씨온도 -> 섭씨온도
	return (fah - 32) * 5 / 9;
}

void Fibonacci(int a) { // 피보나치 수열 함수: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
	int f1 = 0, f2 = 1, f3 = f1 + f2;
	if (a == 1) printf("%d ", f1);
	else {
		printf("%d %d ", f1, f2);

		for (int i = 0; i < a - 2; i++) {
			printf("%d ", f3);
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
		}
	}
}