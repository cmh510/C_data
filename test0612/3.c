//����Լ�, �Լ� ���ο��� �Լ��� �ڱ� �ڽ��� �� �ٽ� ȣ���ϴ� ����
//�Լ� ���� ��� ȣ���� �ߴ��ϵ��� ������ ���� �� ��ɹ��� �ݵ�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, res;
	printf("���� �Է� : ");
	scanf("%d", &n);
	printf("----------------------\n");
	res = func(n);
	printf("��� : %d\n", res);
}

int func(int n) // n�� 3
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * func(n - 1);
	}
}