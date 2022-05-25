#include<stdio.h>

//단일 문자 입력 함수
//getchar()
//getchar()함수는 표준 입력 스트림인 키보드로부터 하나의 문자를 입력받는 함수

//fgetc()
//fgetc()함수는 표준 입력 스트림인 키보드로부터 하나의 문자를 입력받는 함수
//키보드뿐만 아니라 파일을 통해서도 문자를 입력받을 수 있다.

//단일 문자 출력 함수
//putchar()
//putchar()함수는 표준 출력 스트림인 모니터에 하나의 문자를 출력하는 함수

//fputc()
//fputc()함수는 표준 출력 스트림인 모니터에 하나의 문자를 출력하는 함수
//모니터뿐만 아니라 파일을 통해서도 문자를 출력할 수 있다.

int main() {

	char c;
	printf("v가 입력될 때까지 입력하시오\n");

	while ((c = getchar()) != 'v') {
		putchar(c);
	}

	return 0;
}