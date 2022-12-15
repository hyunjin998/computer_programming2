#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void Question();
void ClearLineFromReadBuffer() {
	while (getchar() != '\n');
}

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	while (1) {
		Question();
		int opt;
		scanf("%d", &opt);

		switch (opt) {
		case 1: { // p.445
			char str[20];
			fputs(str, sizeof(str), stdin);
			printf("%d\n", atoi(str));
			puts(atoi(str));

			int i = 0;
			int sum = 0;
			while (str[i] != '\0') {
				if (str[i] >= 0 && str[i] <= 9 )
					sum += str[i];
			}

			puts(str);
			break;
			}

		case 2: {
			char str1[20];
			char str2[20];
			char str3[40];

			// str1�� str2�� ���ؼ� ���α׷� ����ڷκ��� ���ڿ��� �Է� �޵�,
			// fgets �Լ�ȣ���� ���ؼ� �Է� ����
			fgets(str1, 20, stdin);
			fgets(str2, 20, stdin);

			RemoveBSN(str1);
			RemoveBSN(str2);


			strcpy(str3, str1); // str1�� ����� ���ڿ��� str3�� ����
			strcat(str3, str2); // str2�� ����� ���ڿ��� str3�� ����� ���ڿ��� �ڿ� ������

			puts(str3); // str�� ����� ���ڿ� ���


		}


		case 3: {

		}
		}
	}
	return 0;
}

void Question() {
	printf("========================================\n");
	printf("1. CallByValue, CallByReference\n");
	printf("2. num1 = num3, num2 = num1, num3 = num2\n");
	printf("3. num1 = num3, num2 = num1, num3 = num2\n");
	printf("========================================\n");
	printf("Select option: ");
}
