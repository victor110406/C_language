#include<stdio.h>

//����ü
//����ü�� ����ڰ� c����� �⺻ Ÿ���� ������ ���Ӱ� ������ �� �ִ� ����� ���� Ÿ�Դϴ�.
//����ü�� �پ��� Ÿ���� ���� ������ �ϳ��� Ÿ������ ��Ÿ�� ���̴�.

//typedef Ű����
//typedef Ű����� �̹� �����ϴ� Ÿ�Կ� ���ο� �̸��� ���� �� ���
//typedef Ű���带 ����Ͽ� ����ü�� ���ο� �̸��� �����ϸ� �Ź� struct Ű���带 ������� �ʾƵ� �ȴ�.

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
//����ü�� ���ǿ� typedef ������ ���ÿ� �� ������ ����ü�� �̸��� ���� ����


int main() {
	//����ü ���� �ʱ�ȭ
	//����ü ������ �ʱ�ȭ�� ������ ��� ������(.)�� �߰�ȣ({})�� ����Ѵ�.
	//����ü ���ǿ��� ��� ������ ���ǵ� ������ ���� ���ʴ�� �ʱ갪�� �����Ǹ�, ������ ��� ������ 0���� �ʱ�ȭ
	struct student my_student = {.name="Hong",.rank="12",.price=78};

	//����ü ��� ���� ���
	//����ü ����� �����ҷ��� ��� ������(.)�� ����ؾ��Ѵ�.
	my_student.name;
	my_student.rank;
	my_student.price;

	member my_member = {"Hong","12",78};
	my_member.name;
	my_member.rank;
	my_member.price;



	return 0;
}
