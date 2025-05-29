#include <stdio.h>
void proc(int a[], int b);
int main()
{
	int a[6] = { 3,2,5,1,4,6 }; //24바이트
	proc(a, 0);
}
void proc(int a[], int b) // 함수 정의, 인수를 받을 때는 형 선언
{
	int i;
	if (b > 1)
	{
		return;
	}
	else //b가 1보다 크지 않으므로
		for (i = 0; i < 6; i++) // 6번 반복
			printf("%d", a[i]);
}