#include<stdio.h>

int main() {

	int salary;
	int deposit;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &salary);
	deposit = 12 * salary;

	printf("������: %d�� �Դϴ�\n", deposit);

	return 0;
}