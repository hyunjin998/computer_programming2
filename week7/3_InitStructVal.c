#include <stdio.h>


struct point {
	int xpos;
	int ypos;
};


struct person {
	char name[20];
	char phoneNum[20];
	int age;
};


int main() {

	// �߰�ȣ �ȿ� ����� �� 10�� 20�� ���� xpos�� ypos�� �ʱ�ȭ��
	struct point pos = { 10, 20 };

	// ����ü person�� ù ��°, �� ��° ����� char�� �迭�̱� ������
	// �� ���� ���ڿ� ������ ���� ����.
	// �׸��� ������ ����� int�� �����̱� ������ ���������� int�� ������ ����
	struct person man = { "�̽±�", "010-1212-0001", 21 }; 

	printf("%d %d \n", pos.xpos, pos.ypos); // 10 20
	printf("%s %s %d\n", man.name, man.phoneNum, man.age); // �̽±� 010-1212-0001 21

	return 0;
}