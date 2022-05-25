#include<stdio.h>

//C언어는 stdin 표준 스트림 입력창지와, stdou 표준 스트리믈 통한 출력장치

//EOF
//운영체제와 상관없이, 파일의 끝에 도달했을 때 언제나 특별한 값을 반화하도록 한다.
//EOF라고 하며, 이 값은 -1을 나타낸다.

int main() {

	char c;

	//EOF의 강제 발생은  Ctrl + Z를 누르고 Enter키
	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
}