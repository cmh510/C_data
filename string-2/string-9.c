#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //���ڿ� �Լ� ����
#include <string.h>
int main()
{			//�࿡�� null�� �ʿ� x
	char name[5][10]; //name�� �� ���ڿ� ����(�̸� ����), 5���� 9��
	char addr[5][30]; //addr�� �� ���ڿ� ����(�ּ� ����), 5���� 29��
	char search[10]; //10��
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�̸�%d��° :", i + 1); // i == 0, ��¹����� ù��° ������ 1�� ���
		scanf("%s", name[i]);
		printf("�ּ�%d��° :", i + 1);
		scanf("%s", addr[i]);
	}
	printf("�˻��� �̸� �Է��ϼ��� :");
	scanf("%s", search);

	for (i = 0; i < 5; i++)
	{	//strcmp : ���ڳ����� ��
		if (strcmp(name[i], search) == 0)
		{
			printf("�̸� : %s, �ּ� : %s\n", name[i], addr[i]);
			return 0;
		}
	}
	printf("ã�� �̸��� �����ϴ�.");
	return 0;
}
//scanf("%s", a[1]);
//scnaf("%s", b[1][2]);
//scnaf("%s",