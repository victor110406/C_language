#include<stdio.h>

int main() {

	//크기의 단위는 바이트이다.
	printf("char형의 크기 %d\n", sizeof(char));
	printf("short형의 크기 %d\n", sizeof(short));
	printf("int형의 크기 %d\n", sizeof(int));
	printf("long형의 크기 %d\n", sizeof(long));
	printf("long long형의 크기 %d\n", sizeof(long long));
	printf("float형의 크기 %d\n", sizeof(float));
	printf("double형의 크기 %d\n", sizeof(double));

	return 0;
}