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
	char a; // 1����
	int i = 1;
	int k = 0; // �迭�� ��ġ�� �˷��ִ� ����
	while (i) // i�� 1�̰�, 1�̸� ��, ������ ����(��)�϶� �ݺ�, while(1)�̸� ���ѹݺ�
	{
		printf("%d��°, �й��� �Է��Ͻÿ� : ", k + 1);
		scanf("%d", &list[k].number);
		printf("%d��°, �̸��� �Է��Ͻÿ� : ", k + 1);
		scanf("%s", list[k].name);
		printf("%d��°, ������ �Է��Ͻÿ� : ", k + 1);
		scanf("%lf", &list[k].grade);
		printf("�й� : %d\t �̸� : %s\t ���� : %f", list[k].number, list[k].name, list[k].grade);
		k += 1;
		printf("=============================\n");
		printf("�۾��� �����Ͻðڽ��ϱ�? (Y / N)");
		scanf(" %c", &a); // 1����(1����Ʈ) �Է¹��� ������ (����)%c��� �Է��Ѵ�.		" %c"
		if (a == 'Y' || a == 'y')
			i = 0;
	} //while
	// ��������(��/����) => AND : &&, OR : ||
	// ��Ʈ������(������ 0, 1 ���) => AND : &, OR : |
	printf("\n�۾��� �����մϴ�.");
	return 0;
}