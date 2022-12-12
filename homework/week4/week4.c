#include <stdio.h>
void Question();
void DogCat(char **dpa, char **dpb); // 2
void Vowel(char(*a)[10]); // 3


int main() {
	while (1) {
		Question();
		int opt;
		scanf_s("%d", &opt);

		switch (opt) {
		case 1: {
			// �ִ� 10������ �����̸� 4���� ������ �� �ִ� 2���� �迭 ����,
			// ����� ���ÿ� dog, cat, horse, elephant�� �ʱ�ȭ�ϴ� ��� 2����
			char animal[4][10] = { "dog", "cat", "horse", "elephant" };
			char animal2[][10] = { "dog", "cat", "horse", "elephant" };

			for (int i = 0; i < 4; i++) {
				printf("animal[%d]: %s\n", i, animal[i]);
				printf("animal2[%d]: %s\n\n", i, animal[i]);
			}
			break;
		}


		case 2: {
			char* pa = "dog";
			char* pb = "cat";

			printf("pa: %s pb: %s\n", pa, pb); // �Լ� ȣ�� �� dog, cat ���
			DogCat(&pa, &pb);
			printf("pa: %s pb: %s\n", pa, pb); // �Լ� ȣ�� �� cat, dog ���
			break;
		}


		case 3: {
			char arr[2][10];
			for (int i = 0; i < 2; i++) {
				printf("Input: ");
				scanf_s("%s", &arr[i], 10); // ����ڷκ��� �ҹ��ڷ� �� �ܾ� 2���� �Է� �޾� �迭�� ����
			}

			Vowel(arr);
			break;
		}
		}
	}
	return 0;
}


void Question() {
	printf("================================================\n");
	printf("1. dog, cat, horse, elephant\n"); // 2���� �迭�� �ʱ�ȭ�ϴ� ��� 2����
	printf("2. dog <-> cat\n"); // ���������͸� ����� dog�� cat�� �ٲ�� �ϴ� �Լ�
	printf("3. \n");
	printf("4. 2 4 6 ... 100\n"); // 2�� ��� ��° ��ġ�� �ִ� ���� ����ϴ� �Լ� ȣ��
	printf("================================================\n");
	printf("Select option: ");
}


// 2. ���������͸� ����� dog�� cat�� �ٲ�� �Լ�
void DogCat(char **dpa, char **dpb) {
	char* tmp = *dpa;
	*dpa = *dpb;
	*dpb = tmp;
}


// 3. �ܾ ���޹޾�, ������ �ܾ ������ �� �� �������� ����ϴ� �Լ�
void Vowel(char(*a)[10]) {
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i][j] == 'a' || a[i][j] == 'e' || a[i][j] == 'i' || a[i][j] == 'o' || a[i][j] == 'u'){
				if (i == 0) cnt1++;
				else cnt2++;
			}
		}
	}
	printf("%d %d\n", cnt1, cnt2);
}