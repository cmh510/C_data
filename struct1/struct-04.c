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
	strcpy(list[2].name, "ȫ�浿");
	list[2].grade = 4.3;*/
	for (int i = 0; i < 3; i++)
	{
		printf("%d��°, �й��� �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &list[i].number);
		printf("%d��°, �̸��� �Է��Ͻÿ� : ", i + 1);
		scanf("%s", list[i].name);
		printf("%d��°, ������ �Է��Ͻÿ� : ", i + 1);
		scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < 3; i++) {
		printf("�й� : %d\t �̸� : %s\t ���� : %f", list[i].number, list[i].name, list[i].grade);
		/*printf("%d\t", list[i].number);
		printf("%s\t", list[i].name);
		printf("%.1f\t", list[i].grade);*/
	}
	return 0;
}