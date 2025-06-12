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
	
	printf("첫 번째 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("두 번째 숫자를 입력하세요 : ");
	scanf("%d", &b);
	printf("연산할 기호를 입력하세요.(+, -, *, /) : ");
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
		printf("연산을 잘못 입력하셨습니다.");
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
//오른쪽에 같은 창 띄우기
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