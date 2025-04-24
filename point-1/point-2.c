#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int i = 10; // 정수형변수에 값이 10
	//double f = 12.3; //실수형 변수에 값이 12.3
	//int* pi = NULL; // 포인터 변수(주소 기억) 선언

	//double* pf = NULL; // 포인터변수
	//// 실수형 변수의 주소
	//pi = &i; // i의 주소를 pi에 저장
	//pf = &f; // f의 주소를 pf에 저장

	//printf("%p %p \n", pi, &i);
	//printf("%p %p \n", pf, &f);
	int k = 300;
	int y = 20;

	printf("%d\n", k);
	printf("%p\n", &k);
	int* po = NULL;
	po = &y;
	printf("%p\n", po);
	printf("%d\n", *po);

	return 0;

}
// int i : 값, int *p; : 주소, i : 값, &i : 주소, p : 주소, *p 주소의 값