#include<stdio.h>

int main() {

	int year;
	bool result;

	printf("연도를 입력하세요:");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if (result) {
		printf("%d년은 윤년입니다.", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", year);
	}

	return 0;
}