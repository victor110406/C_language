#include<stdio.h>

typedef struct {
	char subject[10];
	char name[10];
	int price;
}student;

int main() {

	student* pStudent;

	student my_student[3] = {
		{"����","ȫ����",100},
		{"����","������",70},
		{"����","���輺",50}
	};

	pStudent = my_student;
	puts((pStudent->name));

	return 0;
}