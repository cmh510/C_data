//����Լ�, �Լ� ���ο��� �Լ��� �ڱ� �ڽ��� �� �ٽ� ȣ���ϴ� ����
//�Լ� ���� ��� ȣ���� �ߴ��ϵ��� ������ ���� �� ��ɹ��� �ݵ�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int n); 
int main()
{
	int n, res;
	printf(" ���� �Է� : ");
	scanf("%d", &n);
	printf("----------------------\n");
	res = func(n);
	printf(" = %d\n", res);
	printf("----------------------\n");
	printf(" 1~%d���� �� �� : %d", n, res);
	return 0;
}

int func(int n) // n�� 3
{
	if (n == 1)
	{
		printf(" %d", n);
		return 1;
	}
	else
	{
		printf(" %d +", n);
		return n + func(n - 1);
	}
}