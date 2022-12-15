#include <stdio.h>


// �� ��° ���ڷ� ��ȯ���� int�̰� �� ���� int�� ������ �Ű������� ����� �Լ��� �̸� (�Լ��� �ּ� ��)�� ����
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) {
	return cmp(age1, age2); // ù ��°, �� ��° ���ڸ� �������ϸ鼭 �� ��° ���ڷ� �Լ��� ȣ��
							// �׸��� �� �� ��ȯ�Ǵ� ���� ���ȯ
							// ��������� �� ��° ���ڷ� ��� �Լ��� �ּ� ���� ���޵Ǵ��Ŀ� ����
							// �Լ� WhoIsFirst�� ���۹���� ������
}


// ���ڷ� ���޵� �� ���� �� ū ������ ���� ��ȯ�ϴ� �Լ�
int OlderFirst(int age1, int age2) {
	if (age1 > age2) return age1;
	else if (age1 < age2) return age2;
	else return 0;
}


// ���ڷ� ���޵� �� ���� �� ���� ������ ���� ��ȯ�ϴ� �Լ�
int YoungerFirst(int age1, int age2) {
	if (age1 < age2) return age1;
	else if (age1 > age2) return age2;
	else return 0;
}


int main() {
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("������� 1\n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d���� %d�� �� %d���� ���� ����!\n\n", age1, age2, first); // 20 30 30

	printf("������� 2\n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d���� %d�� �� %d���� ���� ����!\n\n", age1, age2, first); // 20 30 20

	return 0;
}