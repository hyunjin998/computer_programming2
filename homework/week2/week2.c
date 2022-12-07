#include <stdio.h>
void Question();

int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			int arr[3]; // ���̰� 3�� int�� �迭 arr ����
			int* pa = arr; // arr�� ù ��° �ּҰ��� ����Ű�� int�� ������ ���� pa ����
			printf("%d %d\n", sizeof(arr), sizeof(pa)); // 4 * 3 = 12, 8
			break;
		}

		case 2: {
			int arr[3]; // ���̰� 3�� int�� �迭 arr ����
			int* pa = arr; // arr�� ù ��° �ּҰ��� ����Ű�� int�� ������ ���� pa ����

			pa = pa + 1; // pa�� arr�� �� ��° �ּҰ��� ����Ű���� ����
			printf("%u\n", pa); // %u: ��ȣ ���� 10����, arr�� �� ��° �ּҰ� ���

			// arr = arr + 1; ����
			printf("%u\n", arr); // arr�� ù ��° �ּҰ� ���

			break;
		}

		case 3: {
			double arrd[4] = { 12.4, 23.1, 15.7, 31.2 }; // ���̰� 4�� double�� �迭 arrd�� ����� ���ÿ� �ʱ�ȭ
			double* pb = arrd; // arrd�� ù ��° ��Ҹ� ����Ű�� double�� ������ ���� pb ����

			int arrdLen = sizeof(arrd) / sizeof(double); // arrdLen = 8 * 4 / 8 = 4

			// ������ pb�� ����� �迭 ��Ҹ� ó������ ������ ���
			for (int i = 0; i < arrdLen; i++) {
				printf("%.1f ", *pb);
				pb++;
			}
			printf("\n");
			break;
		}

		case 4: {
			char* p = "banana"; // ���ڿ� "banana"�� ����Ű�� ������ p ����

			int pLen = 0;
			for (int i = 0; p[i] != NULL; i++) {
				pLen++;
			} // pLen = 6

			for (int i = 0; i < pLen; i++) {
				for (int j = 0; p[j] != NULL; j++) {
					printf("%c", *(p + j));
				}
				printf("\n");
				p++;
			}
			break;
		}

		case 5: {
			// (��� 1) �ش� ���ڿ��� �迭�� ������ �� 'e'�� �ش��ϴ� index ã��
			char str1[] = { "computerprogramming" };

			int index = NULL;
			while(str1[index] != 'e') index++;
			printf("(1)using Array: %d\n", index);

			// (���2) �迭�� ������� �ʰ� �����͸� ����ؼ� ã��
			char* str2 = "computerprogramming"; // ���ڿ� "computrprogramming"�� ����Ű�� char�� ������ ���� str ����
			
			int i = NULL;
			for (i = 0; i < *str2 != NULL; i++) {
				if (*str2 == 'e') break;
				else str2++;
			}
			printf("(2)using Pointer: %d\n", i);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("================================================\n");
	printf("1. pointer result\n"); // �ڵ��� ���� ����� �����غ���, ����� ��ġ�ϴ��� Ȯ���غ���
	printf("2. pointer result(2)\n"); // �ڵ��� ���� ����� �����غ���, ����� ��ġ�ϴ��� Ȯ���غ���
	printf("3. arrd[4] = { 12.4, 23.1, 15.7, 31.2 }\n"); // ������ pb�� ����� �迭 ��Ҹ� ó������ ������ ����ϴ� ���α׷�
	printf("4. banana\n"); // banana\n anana\n nana\n ana\n na\n a ���
	printf("5. where is 'e' in \"computerprogramming\"\n"); // ���ڿ� "computerprogramming"���� 'e'�� ó������ ��Ÿ���� ��ġ�� ã�� ����ϴ� ���α׷�
	printf("================================================\n");
	printf("Select option: ");
}
