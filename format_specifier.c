#include<stdio.h>

int main() {

	//이스케이프 시퀀스
	printf("C언어 \"특수\" 문자 사용법\n");

	//서식 지정자
	printf("하나의 문자: %c\n", 'a');
	printf("문자열: %s\n", "Hello World");
	printf("고정 소수점으로 표현한 실수(소수점 6자리): %f\n", 3.141592);
	printf("부호 없는 8진수: %o\n", 213);
	printf("부호 없는 16진수: %x\n", 213);

	return 0;
}