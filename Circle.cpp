#include<stdio.h>

int main() {
	
	float radius;  
	float area;   

	printf("반지름을 입력하세요: ");
	scanf_s("%f", &radius);

	area = 3.14f * radius * radius;

	printf("원의 면적: %f", area);

	return 0;
}