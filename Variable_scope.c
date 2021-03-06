#include<stdio.h>

//C언어는 변수의 선언 위치에 따라 변수의 유효 범위, 메모리 반환 시기, 초기화 여부, 저장되는 장소들이 변경
//1.지역 변수(local variable)
// 지역 변수는 선언된 블록 내에서만 유효하며, 블록이 종료되면 메모리가 사라진다.
// 지역 변수는 메모리상에 스택영역에 저장되며,초기화하지 않으면 쓰레기값이 들어가 있다.
 
//2.전역 변수(global variable)
// 전역 변수는 프로그램의 어디에서나 접근할 수 있으며,프로그램이 종료되어야만 메모리에서 사라진다
// 전역 변수는 메모리상의 데이터 영역을 사용하며, 직접 초기화하지 않아도 0으로 자동 초기화

//3.정적 변수(static variable)
// static 키워드로 선언한 변수
// 지역 변수와 전역 변수의 특징을 모두 가지고 있다

//4.레지스터 변수(register variable)
// register키워드로 선언한 변수

//메모리 구조
//1.코드 영역
//2.데이터 영역
//3.스택 영역
//4.힙 영역

int a; //전역 변수

void local() {
	static int i = 1;
	printf("local()함수 의 i의 호출 횟수는 %d이다", i);
	i++;
}

int main() {
	
	int i = 1;
	int a = 10; //지역 변수
	printf("main()함수 지역 변수 a의 값은 %d이다.\n", a);
	if (a < 20) {
		int a = 30; //지역 변수
		printf("조건문 내의 지역 변수 a의 값은 %d이다.\n", a);
	}
	local();


	return 0;
}