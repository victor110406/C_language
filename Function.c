#include<stdio.h>

//함수란 하나의 특별한 작업을 수행하기 위해 독립적으로 설계된 프로그램의 코드

//반환 타입:함수가 모든 작업을 마치고 반환하는 데이터의 타입
//합수 이름:함수를 호출하기 위한 이름
//매개변수 목록:함수 호출 시에 전달되는 인수의 값을 저장할 변수들을 명시
//함수 몸체;함수의 고유 기능을 수행하는 명령문

int MaxCheck(int a, int b); //함수의 원형

int main() {
	
	int max;
	max = MaxCheck(3, 5);
	printf("둘 중 큰 값은:%d", max);
	return 0;
}

int MaxCheck(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
