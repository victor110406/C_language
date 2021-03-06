#include<stdio.h>
#define PIE 3.141592

//매크로 함수
#define MAX(a,b) a>b?a:b

//선행처리
//선행처리 작업은 컴파일하기 전 선행처리기에 의해 먼저 처리된다.

//선행처리의 특징
//선행처리문은 선행처리 문자(#)로 시작한다.
//선행처리문은 c언어의 명령문과 달리 맨 뒤에 세미콜론(;)을 붙이지 않는다.

//선행처리 지시자
//#include 외부에 선언된 함수나 상수 등을 사용하기 위해, 함수나 상수가 포함된 외부 파일을 현재 파일에 포함할 때 사용
//#include 선행처리 지시문에서 파일 이름을 표시하는 방범은 2가지이다.
//1.#include<stdio.h>
//2.#include "function.h"
//C언어에서 제공하는 표준 헤더 파일을 포함할 때에는 <>를 상용
//사용자가 직접 작성한 헤더 파일을 포함할 때에는 ""를 사용

//#define 함수나 상수를 단순화해주는 메크로를 정의


int main() {

	return 0;
}