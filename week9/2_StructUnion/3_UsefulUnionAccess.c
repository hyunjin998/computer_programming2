#include <stdio.h>

// �� ���� unsigned short�� ������ ����� ���ϴ� 4����Ʈ ũ���� ����ü ����
typedef struct dbshort {
	unsigned short upper;
	unsigned short lower;
} DBShort;


// ���ǵ� ����ü�� ��� ����� ũ�Ⱑ 4����Ʈ�̹Ƿ�,
// �� ����ü�� ������ �����ϸ� 4����Ʈ�� �Ҵ��
typedef union rdbuf {
	int iBuf;
	char bBuf[4];
	DBShort sBuf; // ����ü�� ����� ����ü ������ ����
} RDBuf;


int main() {
	RDBuf buf;
	printf("���� �Է�: ");


	// iBuf��� �̸��� int������ ����� ����� �̿���,
	// 4����Ʈ ũ���� ����ü ������ ������ �Է� ����
	scanf_s("%d", &(buf.iBuf));


	// ���� 2����Ʈ�� ���� 2����Ʈ ���� ���� ���� �������·� ���
	printf("���� 2����Ʈ: %u\n", buf.sBuf.upper);
	printf("���� 2����Ʈ: %u\n", buf.sBuf.lower);

	// ���� 1����Ʈ�� ���� 1����Ʈ�� ���� ���� �ƽ�Ű �ڵ� ���ڷ� ���
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c\n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c\n", buf.bBuf[3]);

	return 0;
}