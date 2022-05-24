#include<stdio.h>

int main() {

	//continue 문
	//continue 문은 루프 안에서 사용하여 해당 루프의 나머지 부분을 무시하고 다음 조건식으로 넘어가는 기능이다.

	int num = 2;
	for (int i = 1; i < 100; i++) {
		if (i % num == 0) {
			continue;
		}
		printf("%d\n", i);
	}

	//break 문
	//break 문은 루프 내에서 사용하여 해당 반복문을 완전히 종료시킨 뒤, 다음 명령문을 실행
	
	int num1 = 5;
	for (int i = 1; i < 100; i++) {
		if (i % num1 == 0) {
			break;
		}
		printf("%d\n", i);
	}

	return 0;
}