#include<stdio.h>

//�迭�� �̸��� ������ ����̴�.
//arr[n] == *(arr + n) ���� �ǹ��̴�

int main() {

	int arr[5] = { 10,20,30,40,50 };
	int* pInt = arr;

	for (int i = 0; i < 5; i++) {
		printf("�迭�� ��: %d\n", arr[i]);
		printf("�������� ��: %d\n", pInt[i]);
	}

	printf("�迭�� ũ��: %zd\n", sizeof(arr));
	printf("�������� ũ��: %zd\n", sizeof(pInt));

	//������ �迭
	//�迭 ��ҷ� ������ ������ ������ �迭

	int a = 10, b = 20, c = 30;
	int* pint[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *pint[i]);
	}

	//�迭 ������
	//�迭�� ����ų �� �ִ� ������

	return 0;
}