#include<stdio.h>

int main() {

	//continue ��
	//continue ���� ���� �ȿ��� ����Ͽ� �ش� ������ ������ �κ��� �����ϰ� ���� ���ǽ����� �Ѿ�� ����̴�.

	int num = 2;
	for (int i = 1; i < 100; i++) {
		if (i % num == 0) {
			continue;
		}
		printf("%d\n", i);
	}

	//break ��
	//break ���� ���� ������ ����Ͽ� �ش� �ݺ����� ������ �����Ų ��, ���� ��ɹ��� ����
	
	int num1 = 5;
	for (int i = 1; i < 100; i++) {
		if (i % num1 == 0) {
			break;
		}
		printf("%d\n", i);
	}

	return 0;
}