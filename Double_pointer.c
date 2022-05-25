#include<stdio.h>

//더블 포인터
//포인터의 변수를 가리키는 포인터를 의미한다.

//void 포인터
//void 포인터는 일반적인 포인터 변수와는다리 대상이 되는 데이터의 타입을 명시하지 않는 포인터
//변수, 함수, 포인터 등 어떠한 값도 가리킬 수 있지만, 포인터 연산이나 메모리 참조와 같은 역참조가 불가능하다.
//void 포인터를 사용할 때에는 사용하고자 하는 타입으로 변환 후에 사용해야 한다.

//함수 포인터
//함수의 시작 주소를 가리키는 포인터 상수를 함수 포인터라 부른다.

//널 포인터
//0이나 NULL을 대입하여 초기화한 포인터를 널 포인터라 한다.

int main() {

	int a = 10;
	int* pInt = &a;
	int** ppInt = &pInt;

	printf("변수 a가 저장한 값:%d\n", a);
	printf("포인터 pInt가 가리키는 값:%d\n", *pInt);
	printf("포인터 ppInt가 가리키는 값:%d\n", **ppInt);

	int b = 20;
	void* pVoid = &b;

	printf("변수 b가 저장한 값:%d\n", b);
	printf("포인터 pVoid가 가리키는 값:%d\n", *(int*)pVoid);

	return 0;
}