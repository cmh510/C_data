#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	struct insa {
		char name[10];
		int age;
	} a[] = { "Kim", 28, "Lee", 38, "Park", 42, "Choi", 31 };

	struct insa* p;
	p = a;
	p++;
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%s\n", (*p).name);
	printf("%d\n", (*p).age);
	return 0;
}
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//
//int main()
//{
//	struct student s = { 1, "홍길동", 4.3 };
//	struct student* p;
//
//	p = &s; //p는 s주소를 가르킴
//	//이 세 방법 중 하나로.
//	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
//	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);
//	printf("학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);
//
//	return 0;
//}