#include<stdio.h>

//union(공용체)
//모든 멤버 변수가 하나의 메모리 공간을 공유한다.
//모든 멤버 변수가 같은 메모리 공간을 공유하므로, 공용체는 한 번에 하나씩 멤버 변수만 사용할 수 있다.
//공용체는 가장 큰 멤버 변수의 크기로 메모리를 할당받습니다.

typedef union {
	unsigned char a;
	unsigned short b;
	unsigned int c;
}TEST;

//enum(열거체)
//열거체는 새로운 타입을 선언하면서, 동시에 해당 타입이 가질 수 있는 정수형 상수값도 같이 명시하는 타입
//상수값을 따로 명시하지 않으면 0부터 시작된다.
enum month { January = 1, February = 2, March = 3};

int main() {

	TEST Test;
	Test.c = 1234567;

	printf("%d\n", Test.a);
	printf("%d\n", Test.b);
	printf("%d\n", Test.c);

	enum month mon;
	mon = January;
	printf("%d\n", mon);
	


	return 0;
}