#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int a, int b);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
int main()
{
	int a, b;
	int r1 = 0;
	double r2 = 0;
	char op;
	
	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("������ ��ȣ�� �Է��ϼ���.(+, -, *, /) : ");
	scanf(" %c", &op);

	if (op == '+')
	{
		r1 = add(a, b);
	}
	else if (op == '-')
	{
		r1 = sub(a, b);
	}
	else if (op == '*')
	{
		r1 = mul(a, b);
	}
	else if (op == '/')
	{
		r2 = div(a, b);
	}
	else
	{
		printf("������ �߸� �Է��ϼ̽��ϴ�.");
	}
	if (op == '+' || op == '-' || op == '*')
	{
		printf("%d %c %d = %d\n", a, op, b, r1);
	}
	else if(op == '/')
	{
		printf("%d %c %d = %.2f\n", a, op, b, r2);
	}
	return 0;
}
//shift + alt + w + n
//shitf + alt + w + v
//�����ʿ� ���� â ����
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
double div(int x, int y)
{
	return (double)x / y;
}