/* ȸ��(Palindrome)�� ������ ������ �ڷ� ������ ���̰� ���� �ܾ���� ���Ѵ�.
���� �� level, bob�� ���� �ܾ���� ȸ���� ���Ѵ�.
�̿� �츮�� ���ڷ� ���޵Ǵ� ���ܾ ȸ������ �ƴ����� �Ǵ��ؼ�
�� ����� ����ϴ� ����� �Լ��� �����ϰ� �̿� ������ main �Լ��� ������ ������ �Ѵ�.

��, ������ ���Ǹ� ���� ��ҹ��ڱ��� ��ġ�ؾ� ȸ������ �����ϱ�� �ϰڴ�

(���� ��)
���ڿ� �Է�: noon
ȸ�� �Դϴ�.
*/


#include <stdio.h>
void Palindrome(char a[], int len);


int main() {
	char str[20];
	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, 20);

	int cnt = 0;
	while (str[cnt] != 0) cnt++;
	Palindrome(str, cnt);
	return 0;
}


void Palindrome(char a[], int len) {
	for (int i = 0; i < len; i++) {
		if (a[i] == a[len - 1 - i]) {
			if (i >= len - i) {
				printf("ȸ���Դϴ�.\n");
				break;
			}
		}
		else {
			printf("ȸ���� �ƴմϴ�.\n");
			break;
		}
	}
}