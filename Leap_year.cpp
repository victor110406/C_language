#include<stdio.h>

int main() {

	int year;
	bool result;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if (result) {
		printf("%d���� �����Դϴ�.", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.", year);
	}

	return 0;
}