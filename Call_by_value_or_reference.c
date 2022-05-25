#include<stdio.h>

// 1.값의 의한 전달(call by value)
// 값의 의한 전달은 변수가 가지고 있는 값을 함수 내의 매개변수로 복사하는 방법
 
// 2.참조에 의한 전달(call by reference)
// 참조에 의한 전달은 변수의 값이 전달되는 것이 아닌, 변수의 주소값을 전달

void swap_value(int a, int b);
void swap_reference(int* a, int* b);

int main_fasfa() {

	int a = 10, b = 20;
	swap_value(a, b);
	printf("함수 호출 후 변수 a = %d, b = %d\n", a, b);
	swap_reference(&a, &b);
	printf("함수 호출 후 변수 a = %d, b = %d\n", a, b);

	return 0;
}

void swap_value(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap_reference(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

