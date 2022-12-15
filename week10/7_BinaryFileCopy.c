#include <stdio.h>

int main() {

	// ���̳ʸ� ���� ������ ����
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	while (1) {
		// fread �Լ��� �̿��� ���Ϸκ��� �����͸� ����
		// �� ��° �������ڰ� 1, �� ��° �������ڰ� sizoef(buf)�̴�,
		// �о� ���̴� �������� ũ��� �� 1 * sizeof(buf) ����Ʈ
		readCnt = fread((void*)buf, 1, sizeof(buf), src);


		// fread �Լ��� sizeof(buf)�� ��ȯ ������ ���� ���� ��ȯ���� �� '��'
		if (readCnt < sizeof(buf)) {

			// ������ ���� �����ؼ� sizeof(buf)�� ��ȯ ������ ���� ���� ����Ʈ�� �������� �� ����Ǵ� ����
			// ���� ���� ����Ʈ�� ���������� �� ���� ������ �Ϻκ��̹Ƿ�
			// fwrite �Լ�ȣ���� ���� �����ؾ���
			if (feof(src) != 0) {


				// �迭 buf�� �� ä�� �����͸� �״�� ���Ͽ� ����
				fwrite((void*)buf, 1, readCnt, des);
				puts("���Ϻ��� �Ϸ�"); break;
			}
			else puts("���Ϻ��� ����"); break;
		}
	}
}