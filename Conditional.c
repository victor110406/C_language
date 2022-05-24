#include<stdio.h>

int main() {

	//조건문은 주어진 조건식에 따라 별도의 명령을 수행하도록 제어하는 명령문이다.
	
	// if 문
	// if문은 조건식의 결과가 참이면 주어진 명령문을 실행하고, 거짓이면 아무것도 실행하지 않는다.
	int a = 3;
	if (a < 7) {
		printf("입력한 수는 7보다 작다.\n");
	}
	if (a > 7) {
		printf("입력한 수는 7보다 크다.\n");
	}

	// if/ else 문
	// if문과 함께 사용하는 else문은 if문과 반대로 주어진 조건식의 결과가 거짓이면 명령문을 실행한다.
	int b = 3;
	if (b < 7) {
		printf("입력한 수는 7보다 작다.\n");
	}
	else {
		printf("입력한 수는 7보다 크다.\n");
	}

	// if/ else if/ else 문
	// else if문은 if문 처럼 조건식을 가질 수 있기 때문에 if문을 더 쉽게 표현할 수 있다.
	int c = 3;
	if (c < 7) {
		printf("입력한 수는 7보다 작다.\n");
	}
	else if (c > 7) {
		printf("입력한 수는 7보다 크다.\n");
	}
	else {
		printf("입력한 수는 7입니다..\n");
	}

	// switch문
	// switch는 주어진 조건 값의 결과에 따라 프로그램이 명령을 수행하도록 하는 조건문입니다.
	int num = 2;
	switch (num)
	{
	case 1:
		printf("num의 수는 1입니다.\n");
		break;
	case 2:
		printf("num의 수는 2입니다.\n");
		break;
	case 3:
		printf("num의 수는 3입니다.\n");
		break;
	default:
		printf("1~3의 값이 필요합니다.\n");
		break;
	}

	return 0;
}

	
