#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);

	(*pi)++; //주소는 그대로, 값 증가
	printf("i = %d, pi = %p\n", i, pi);

	*pi++; //주소 증가, 값 그대로
	printf("i = %d, pi = %p\n", i, pi);
	return 0;
}