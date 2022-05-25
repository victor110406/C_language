#include<stdio.h>

//배열의 이름은 포인터 상수이다.
//arr[n] == *(arr + n) 같은 의미이다

int main() {

	int arr[5] = { 10,20,30,40,50 };
	int* pInt = arr;

	for (int i = 0; i < 5; i++) {
		printf("배열의 값: %d\n", arr[i]);
		printf("포인터의 값: %d\n", pInt[i]);
	}

	printf("배열의 크기: %zd\n", sizeof(arr));
	printf("포인터의 크기: %zd\n", sizeof(pInt));

	//포인터 배열
	//배열 요소로 포인터 변수를 가지는 배열

	int a = 10, b = 20, c = 30;
	int* pint[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *pint[i]);
	}

	//배열 포인터
	//배열을 가리킬 수 있는 포인터

	return 0;
}