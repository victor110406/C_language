#include<stdio.h>

int main() {

	int x, y;

	printf("�ΰ��� ���� �Է��Ͻÿ�:");
	scanf_s("%d %d", &x, &y);

	printf("ū ��: %d\n", (x > y) ? x : y);
	printf("���� ��: %d\n", (x < y) ? x : y);

	return 0;
}