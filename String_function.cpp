#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main() {

	//strlen()�Լ�
	//strlen()�Լ��� �μ��� ���޵� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�
	char a[10] = "Hello";
	printf("���ڿ��� ���̴�:%zd\n", strlen(a));

	//strcat()�Լ��� strcat_s()�Լ�
	//strcat()�Լ� �ϳ��� ���ڿ��� �ٸ� ���ڿ��� �������ִ� �Լ�
	char b[20] = "Hello "; // �� ���ڸ� �����Ͽ� 15����
	char c[10] = "World!";
	strcat_s(b, c);
	puts(b);

	//strcpy()�Լ��� strcpy_s()�Լ�
	//strcpy()�Լ��� ���ڿ��� �����ϴ� �Լ�
	//���޵� �迭�� ũ�Ⱑ ������ ���ڿ��� ���̺��� ������, �����÷ο찡 �߻�
	char d[15] = "Hello Wolrd!";
	char e[15] = {};
	strcpy_s(e, d);
	puts(e);

	//strcmp()�Լ�
	//strcmp()�Լ��� ���ڿ��� ������ ���ϴ� �Լ�
	char f[20] = "Hello";
	char g[10] = "Hello";
	printf("%d\n", strcmp(f, g));

	//atoi()�Լ�, atol()�Լ�, atoll()�Լ�, atof()�Լ�
	//�μ��� ���޵� ���ڿ��� �ش� Ÿ���� ���ڷ� ��ȯ�����ִ� �Լ�
	char h[10] = "10";
	char i[10] = "20";
	printf("�� ���ڿ��� ����:%d\n", atoi(h)*atoi(i));
	
	//toupper()�Լ��� tolower()�Լ�
	//�μ��� ���޵� ���ڿ��� �����ڸ� ��� �빮�ڳ� �ҹ��ڷ� ��ȯ�����ִ� �Լ�
	char j[20] = "Hello World!";
	for (int i = 0; i < strlen(j); i++) {
		putchar(toupper(j[i]));
	}
	printf("\n");
	for (int i = 0; i < strlen(j); i++) {
		putchar(tolower(j[i]));
	}

	return 0;
}