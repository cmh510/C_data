#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s; // 구조체 변수 선언

	s.number = 20230001;
	strcpy(s.name, "홍길동"); // 문자열 복사, 문자열은 직접 대입 불가
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.1f\n", s.grade);

	return 0;
}