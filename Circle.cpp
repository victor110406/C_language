#include<stdio.h>

int main() {
	
	float radius;  
	float area;   

	printf("�������� �Է��ϼ���: ");
	scanf_s("%f", &radius);

	area = 3.14f * radius * radius;

	printf("���� ����: %f", area);

	return 0;
}