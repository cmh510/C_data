#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 10000;
	int mo;
	char gu;
	char q;
	while (1) {
		printf("�ݾ��� �Է��ϼ��� : ");
		scanf("%d", &mo);

		printf("�Ա��̸� a, ����̸� b�� �Է����ּ��� : ");
		scanf(" %c", &gu);
		switch (gu) // ������ ���� �ִ� ����
		{
		case 'a': //���� a �̸� �Ա�
			sum += mo;
			printf("�Ա� �Ϸ�, ���� �ܾ� : %d\n", sum);
			break;
		case 'b':
			sum -= mo;
			printf("��� �Ϸ�, ���� �ܾ� : %d\n", sum);
			break;
		default:
			printf("�߸��Է��ϼ̽��ϴ�.\n");
		}//switch
		printf("�۾��� �����Ͻðڽ��ϱ�? (Y/N)\t");
		scanf(" %c", &q);
		if (q == 'Y' || q == 'y')
			break;
	}//while
	printf("�۾��� �����մϴ�.");
	return 0;
}