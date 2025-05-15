#include <stdio.h>

int main()
{
	int a = 300;
	int* p;
	printf("%d", a);
	p = &a; //a와 p는 같은 주소
	//a : 값, &a : 주소
	printf("%p", p);
	printf("%p", *p); //역참조, 포인터변수* => 그 주소의 값을 불러온다

	int a = 10; // 정수형 변수 a에 10 저장
	int* p = &a; // 정수형 포인터변수 p에 a의 주소 저장
	printf("%d", *p); // 역참조, a의 주소에 있는 값 10 프린트
	
	int b = 5; // 정수형 일반 변수 b에 5 저장
	int* ptr = &b; // 정수형 포인터변수 ptr에 b의 주소 저장
	*ptr = 20; // 역참조, ptr에 저장되어 있는 주소인 b의 값에 20저장
	printf("%d", b); // 20


	return 0;
}
