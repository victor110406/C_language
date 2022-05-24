#include<stdio.h>

// 배열은 같은 타입의 변수들로 이루어진 집합이다.
// 배열을 구성하는 값을 배열 요소라고 하며, 배열에서는 위치를 가리키는 숫자를 인덱스라고 한다.
// 배열의 첫 번째 요소는 주소를 가르킨다.

int main() {

	int sum = 0;
	int grade[3] = { 75,35,80 }; //초기화
	int ArrayLength = sizeof(grade) / sizeof(grade[0]);

	for (int i = 0; i < 3; i++) {
		sum += grade[i];
	}

	printf("점수의 합은: %d\n", sum);
	printf("배열의 길기는: %d\n", ArrayLength);

	return 0;
}