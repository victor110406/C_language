#include<stdio.h>

//구조체
//구조체란 사용자가 c언어의 기본 타입을 가지고 새롭게 정의할 수 있는 사용자 정의 타입니다.
//구조체는 다양한 타입의 변수 집합을 하나의 타입으로 나타낸 것이다.

//typedef 키워드
//typedef 키워드는 이미 존재하는 타입에 새로운 이름을 붙일 때 사용
//typedef 키워드를 사용하여 구조체에 새로운 이름을 선언하면 매번 struct 키워드를 사용하지 않아도 된다.

struct student {
	char name[10];
	char rank[5];
	int price;
};

typedef struct  {
	char name[10];
	char rank[5];
	int price;
}member;
//구조체의 정의와 typedef 선언을 동시에 할 때에는 구조체의 이름을 생략 가능


int main() {
	//구조체 변수 초기화
	//구조체 변수를 초기화할 때에는 멤버 연산자(.)와 중괄호({})를 사용한다.
	//구조체 정의에서 멤버 변수가 정의된 순서에 따라 차례대로 초깃값이 설정되며, 나머지 멤버 변수는 0으로 초기화
	struct student my_student = {.name="Hong",.rank="12",.price=78};

	//구조체 멤버 접근 방법
	//구조체 멤버로 접근할려면 멤버 연산자(.)를 사용해야한다.
	my_student.name;
	my_student.rank;
	my_student.price;

	member my_member = {"Hong","12",78};
	my_member.name;
	my_member.rank;
	my_member.price;



	return 0;
}
