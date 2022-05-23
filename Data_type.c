#include<stdio.h>

int main() {
	
	// unsigned 키워드
	// 부호를 나타내는 최상위 비트까지 크기를 나타내는데 사용

	// (signed) char -128 ~ 127
	// unsigned char 0 ~ 255
	// (signed) short -32,768 ~ 32,767
	// unsigned short 0 ~ 65,535
	// (signed) int -2,147,483,648 ~ 2,147,483,647
	// unsigned int 0 ~ 4,294,967,296
	// float (3.4 * 10^-38) ~ (3.4 * 10^38)
	// double (1.7 * 10^-308) ~ (1.7 * 10^308)


	//오버플로우(overflow)는 해당 데이터 타입이 표현할 수 있는 최대 범위보다 큰 수를 저장할 때 발생하는 현상
	//언더플로우(underflow)란 해당 타입이 표현할 수 잇는 최소 범위보다 작은 수를 저장할 때 발생하는 현상

	char s = 'a';
	// 정수로 출력
	printf("s의 값은: %d\n", s);
	// 문자로 출력
	printf("s의 값은: %c\n", s);
	
	short a = 32767;
	printf("a의 값은: %d\n", a);
	
	a = 32768;
	printf("a의 값은: %d\n", a);

	// float 타입의 유효 자릿수는 소수점 6자리
	float b = 3.1415926535897932f;  
	printf("c의 값은: %.20f\n", b);

	// double 타입의 유효 자릿수는 소수점 16자리
	double c = 3.1415926535897932; 
	printf("c의 값은: %.20f\n", c);

	return 0;
}