#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main() {

	//strlen()함수
	//strlen()함수는 인수로 전달된 문자열의 길이를 반환하는 함수
	char a[10] = "Hello";
	printf("문자열의 길이는:%zd\n", strlen(a));

	//strcat()함수와 strcat_s()함수
	//strcat()함수 하나의 문자열을 다른 문자열에 연결해주는 함수
	char b[20] = "Hello "; // 널 문자를 포함하여 15문자
	char c[10] = "World!";
	strcat_s(b, c);
	puts(b);

	//strcpy()함수와 strcpy_s()함수
	//strcpy()함수는 문자열을 복사하는 함수
	//전달된 배열의 크기가 복사할 문자열의 길이보다 작으면, 오버플로우가 발생
	char d[15] = "Hello Wolrd!";
	char e[15] = {};
	strcpy_s(e, d);
	puts(e);

	//strcmp()함수
	//strcmp()함수는 문자열의 내용을 비교하는 함수
	char f[20] = "Hello";
	char g[10] = "Hello";
	printf("%d\n", strcmp(f, g));

	//atoi()함수, atol()함수, atoll()함수, atof()함수
	//인수로 전달된 문자열을 해당 타입의 숫자로 변환시켜주는 함수
	char h[10] = "10";
	char i[10] = "20";
	printf("두 문자열의 곱은:%d\n", atoi(h)*atoi(i));
	
	//toupper()함수와 tolower()함수
	//인수로 전달된 문자열의 영문자를 모두 대문자나 소문자로 변환시켜주는 함수
	char j[20] = "Hello World!";
	for (int i = 0; i < strlen(j); i++) {
		putchar(toupper(j[i]));
	}
	printf("\n");
	for (int i = 0; i < strlen(j); i++) {
		putchar(tolower(j[i]));
	}

	return 0;
}
