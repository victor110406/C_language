#include<stdio.h>

// �迭�� ���� Ÿ���� ������� �̷���� �����̴�.
// �迭�� �����ϴ� ���� �迭 ��Ҷ�� �ϸ�, �迭������ ��ġ�� ����Ű�� ���ڸ� �ε������ �Ѵ�.
// �迭�� ù ��° ��Ҵ� �ּҸ� ����Ų��.

int main() {

	int sum = 0;
	int grade[3] = { 75,35,80 }; //�ʱ�ȭ
	int ArrayLength = sizeof(grade) / sizeof(grade[0]);

	for (int i = 0; i < 3; i++) {
		sum += grade[i];
	}

	printf("������ ����: %d\n", sum);
	printf("�迭�� ����: %d\n", ArrayLength);

	return 0;
}