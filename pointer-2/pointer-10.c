#include <stdio.h>
//값에 의한 호출
void swap(int x, int y); // 함수 원형
int main()
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b); //100, 200

	swap(a, b); // 함수 호출

	printf("a=%d b=%d\n", a, b);
	return 0;
}
void swap(int x, int y)
{
	int tmp;
	printf("x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d\n", x, y);
}
