#include <stdio.h>
#include <stdlib.h>  // rand()�Լ��� �����ϴ� ���̺귯��
#include <time.h>   // time()�Լ��� �����ϴ� ���̺귯��
int RockSissorsPaper();


int main() {
	char str[10];
	int user;
	int cnt = 0, win = 0;
	int result = 1;
	char computerStr[10];


	while (result != 0) {
		printf("������ 1, ������ 2, ���� 3 : ");
		fgets(str, sizeof(str), stdin);

		if (str == "����") user = 1;
		else if (str == "����") user = 2;
		else if (str == "��") user = 3;


		int computer = RockSissorsPaper();


		printf("����� %s ����, ��ǻ�ʹ� %s ����\n", (char)str, computerStr);

		if (computer = 1) puts("����");
		else if (computer = 2) puts("����");
		else if (computer = 3) puts("��");


		if (user == computer) puts("�����ϴ�.\n");
		else if (user > computer) {
			puts("����� �̰���ϴ�.\n");
			win++;
		}

		else {
			puts("����� �����ϴ�.\n");
			puts("������ ���: %d��, %d��\n", win, cnt);

			result = 0;
		}
		cnt++;
	}

	return 0;
}


int RockSissorsPaper() {
	srand(time(NULL)); // �Ź� �ٸ� ������ �߻��ϵ��� �ϱ� ���ؼ� ���
	int random = 0;
	for (int i = 0; i < 10; i++) {
		random = rand() % 3;          // ����, ����, ���� ���� 3���� ���� ����
	}
	return random;
}