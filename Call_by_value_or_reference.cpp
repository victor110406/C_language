#include<stdio.h>

// 1.���� ���� ����(call by value)
// ���� ���� ������ ������ ������ �ִ� ���� �Լ� ���� �Ű������� �����ϴ� ���
 
// 2.������ ���� ����(call by reference)
// ������ ���� ������ ������ ���� ���޵Ǵ� ���� �ƴ�, ������ �ּҰ��� ����

void swap_value(int a, int b);
void swap_reference(int* a, int* b);

int main() {

	int a = 10, b = 20;
	swap_value(a, b);
	printf("�Լ� ȣ�� �� ���� a = %d, b = %d\n", a, b);
	swap_reference(&a, &b);
	printf("�Լ� ȣ�� �� ���� a = %d, b = %d\n", a, b);

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

