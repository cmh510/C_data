#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
		printf("������ �߸� �Է��ϼ̽��ϴ�./\n");
	} // switch
	return 0;
}

//scanf(�Ǽ���)
//float : %f
//double : %lf
//
//printf(�Ǽ���)
//float : %f
//double : %f = > printf �ÿ��� c���� �Ǽ��� �⺻���� double�̱� ������ ���� double ó��