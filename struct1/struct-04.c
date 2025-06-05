#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100];

	/*list[2].number = 24;
	strcpy(list[2].name, "홍길동");
	list[2].grade = 4.3;*/
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째, 학번을 입력하시오 : ", i + 1);
		scanf("%d", &list[i].number);
		printf("%d번째, 이름을 입력하시오 : ", i + 1);
		scanf("%s", list[i].name);
		printf("%d번째, 학점을 입력하시오 : ", i + 1);
		scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < 3; i++) {
		printf("학번 : %d\t 이름 : %s\t 학점 : %f", list[i].number, list[i].name, list[i].grade);
		/*printf("%d\t", list[i].number);
		printf("%s\t", list[i].name);
		printf("%.1f\t", list[i].grade);*/
	}
	return 0;
}