#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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

	switch (op)
	{
	case '+':
		r1 = a + b;
		printf("%d %c %d = %d", a, op, b, r1);
		break;
	case '-':
		r1 = a - b;
		printf("%d %c %d = %d", a, op, b, r1);
		break;
	case '*':
		r1 = a * b;
		printf("%d %c %d = %d", a, op, b, r1);
		break;
	case '/':
		r2 = (double)a / b;
		printf("%d %c %d = %.2lf", a, op, b, r2);
		break;
	default:
		printf("연산을 잘못 입력하셨습니다./\n");
	} // switch
	return 0;
}

//scanf(실수형)
//float : %f
//double : %lf
//
//printf(실수형)
//float : %f
//double : %f = > printf 시에는 c언어에서 실수형 기본값이 double이기 때문에 전부 double 처리