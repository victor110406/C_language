#include<stdio.h>

int main() {

	int salary;
	int deposit;

	printf("월급을 입력하시오: ");
	scanf_s("%d", &salary);
	deposit = 12 * salary;

	printf("연봉은: %d원 입니다\n", deposit);

	return 0;
}