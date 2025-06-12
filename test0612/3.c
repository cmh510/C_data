//재귀함수, 함수 내부에서 함수가 자기 자신을 또 다시 호출하는 행위
//함수 내에 재귀 호출을 중단하도록 조건이 변경 될 명령문을 반드시 포함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, res;
	printf("정수 입력 : ");
	scanf("%d", &n);
	printf("----------------------\n");
	res = func(n);
	printf("결과 : %d\n", res);
}

int func(int n) // n이 3
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