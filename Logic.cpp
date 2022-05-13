#include<stdio.h>

int main() {

	int x, y;
	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	printf("%d && %d = %d\n", x, y, x && y);
	printf("%d || %d = %d\n", x, y, x || y);
	printf("!%d = %d\n", x, !x);;

	return 0;
}