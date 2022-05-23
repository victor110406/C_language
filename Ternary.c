#include<stdio.h>

int main() {

	int x, y;

	printf("두개의 수를 입력하시오:");
	scanf_s("%d %d", &x, &y);

	printf("큰 수: %d\n", (x > y) ? x : y);
	printf("작은 수: %d\n", (x < y) ? x : y);

	return 0;
}
