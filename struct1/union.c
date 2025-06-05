#include <stdio.h>
//장점 : 메모리 절약
union example {//union : 공용체, struct : 구조체
	int i; 
	char c;
};

int main()
{
	union example v; // 공용체 변수 선언
	
	v.c = 'A';
	printf("v.c:%c	v.i%i\n", v.c, v.i);
	//이전 내용 초기화
	v.i = 10000;
	printf("v.c:%c	v.i%i\n", v.c, v.i);
	return 0;
}