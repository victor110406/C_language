#include<stdio.h>

typedef struct {
	char subject[10];
	char name[10];
	int price;
}student;

int main() {

	student* pStudent;

	student my_student[3] = {
		{"±¹¾î","È«¿ø»ê",100},
		{"¼öÇÐ","Àü½ÂÀ±",70},
		{"°úÇÐ","Á¶°è¼º",50}
	};

	pStudent = my_student;
	puts((pStudent->name));

	return 0;
}