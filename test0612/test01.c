#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int alsgn1(int a, int b);
int alsgn2(int a, int b);
int alsgn3(int a, int b);
double alsgn4(int a, int b);
void alsgn5(int a, int b, char c, int e);
void alsgn6(int a, int b, char c, double f);
int main()
{
	int a, b;
	char c, d;
	int e = 0;
	double f = 0;
	while(1)
	{
		printf("첫 번째 숫자를 입력하세요 : ");
		scanf("%d", &a);
		printf("두 번째 숫자를 입력하세요 : ");
		scanf("%d", &b);
		printf("연산할 기호를 입력하세요.(+, -, *, /) : ");
		scanf(" %c", &c);
		switch (c)
		{
		case '+':
			e = alsgn1(a, b);
			break;
		case '-':
			e = alsgn2(a, b);
			break;
		case '*':
			e = alsgn3(a, b);
			break;
		case '/':
			f = alsgn4(a, b);
			break;
		default:
			printf("잘못 입력하셨습니다.");
		}//switch
		if (c == '+' || c == '-' || c == '*')
		{
			alsgn5(a, b, c, e);
		}//if
		else if (c == '/')
		{
			alsgn6(a, b, c, f);
		}//else if
		printf("-------------------------------\n");
		printf("계산을 종료 하시겠습니까?(y/n) : ");
		scanf(" %c", &d);
		if (d == 'y' || d == 'Y')
			break;
		printf("\n\n");
	}//while
	return 0;
}
int alsgn1(int a, int b)
{
	return a + b;	
}
int alsgn2(int a, int b)
{
	return a - b;
}
int alsgn3(int a, int b)
{
	return a * b;
}
double alsgn4(int a, int b)
{
	return (double)a / b;
}
void alsgn5(int a, int b, char c, int e)
{
	printf("%d %c %d = %d\n", a, c, b, e);
}
void alsgn6(int a, int b, char c, double f)
{
	printf("%d %c %d = %.2f\n", a, c, b, f);
}