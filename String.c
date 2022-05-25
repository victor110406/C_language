#include<stdio.h>

// ""을 사용해 표현되는 문자열을 문자열 상수라고 한다.
// 문자열은 메모리에 저장딘 일련의 연속된 문자들의 집합이다.

int main() {

	char str[] = "Hello World";
	char str1[10] = "Hoong";

	printf("문자열 str에 저장된 문자열은 : %s\n", str);
	printf("문자열 str1에 저장된 문자열은 : %s\n", str1);

	//NULL 문자
	//문자형 배열로 선언딘 문자열 변수는 문자열의 끝을 프로그램에 알려주어야 프로그램이 실제 문자열에 속한 값과 그 외의 쓰레기값을 구분한다.
	//문자열 속한 데이터가 끝나면, 문자열의 끝을 의미하는 문자이다.

	//NULL을 이용한 문자열 길이체크
	int length = 0;
	while (str[length] != '\0') {
		length++;
	}
	printf("문자열의 길이는 %d입니다.", length);

	return 0;
}