#include <stdio.h>
int main()
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	double* p2 = NULL;
	p1 = &x; //p1이 x 주소
	p2 = &y; //p2가 y 주소
	printf("%p %p\n", p2, &y); //포인터 변수와 

	//p2 = p1; //p1 주소를 p2대입
	//printf("%p %p\n", p1, p2);

	printf("%p %d\n", &x, x);	
	printf("%p %d\n", p1, *p1);

}