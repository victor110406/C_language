#include<stdio.h>

int main() {
	//반복문이란 프로그램 내에서 똑같은 명령을 일정 회수만큼 반복하여 수행하도록 제어하는 명령문이다.
	
	//while 문
	//while 문은 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 반복하여 실행한다.
	int i = 0;
	int a = 5;
	while (i < a) {
		printf("%d 번째 수행중입니다.\n", i);
		i++;
	}

	// do /while 문
	// do /while 문은 먼저 루프를 한 번 실행한 후에 조건식을 검사한다.
	int j = 0;
	int b = 5;

	do {
		printf("%d 번째 수행중입니다.\n", j);
		j++;
	} while (j < b);

	// for 문
	// for 문은 초기식,조건식,증감식을 모두 포함하고 있는 반복문이다.
	int k;
	int c = 5;
	for (k = 0; k < c; k++) {
		printf("%d 번째 수행중입니다.\n", k);
	}

	return 0;
}