#include<stdio.h>

//union(����ü)
//��� ��� ������ �ϳ��� �޸� ������ �����Ѵ�.
//��� ��� ������ ���� �޸� ������ �����ϹǷ�, ����ü�� �� ���� �ϳ��� ��� ������ ����� �� �ִ�.
//����ü�� ���� ū ��� ������ ũ��� �޸𸮸� �Ҵ�޽��ϴ�.

typedef union {
	unsigned char a;
	unsigned short b;
	unsigned int c;
}TEST;

//enum(����ü)
//����ü�� ���ο� Ÿ���� �����ϸ鼭, ���ÿ� �ش� Ÿ���� ���� �� �ִ� ������ ������� ���� ����ϴ� Ÿ��
//������� ���� ������� ������ 0���� ���۵ȴ�.
enum month { January = 1, February = 2, March = 3};

int main() {

	TEST Test;
	Test.c = 1234567;

	printf("%d\n", Test.a);
	printf("%d\n", Test.b);
	printf("%d\n", Test.c);

	enum month mon;
	mon = January;
	printf("%d\n", mon);
	


	return 0;
}