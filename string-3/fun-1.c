#include <stdio.h>

int func(int);
int main()
{
	int a;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("%d", func(a));
}

int func(int a) {
	if (a <= 1) return 1;
	return a * func(a - 1);
}

//a=5 -> 120
//a=4 -> 24
//a=3 -> 6
//a=2 -> 2
//a=1 -> 1