#include<stdio.h>

//C���� stdin ǥ�� ��Ʈ�� �Է�â����, stdou ǥ�� ��Ʈ���� ���� �����ġ

//EOF
//�ü���� �������, ������ ���� �������� �� ������ Ư���� ���� ��ȭ�ϵ��� �Ѵ�.
//EOF��� �ϸ�, �� ���� -1�� ��Ÿ����.

int main() {

	char c;

	//EOF�� ���� �߻���  Ctrl + Z�� ������ EnterŰ
	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
}