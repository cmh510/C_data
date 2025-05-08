#include <stdio.h>
int main()
{
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20; //* => 기억하고 있는 주소에 가서 그 값을 의미, 그 값에 20 대입
	printf("i = %d\n", i); // 20 출력
	
	int a = 10;
	int* po;
	p = &a; //a주소 = po의 기억하는 값
	//sizeof() : ()안의 크기
	printf("%d\n", sizeof(a)); // 4바이트
	printf("%d\n", sizeof(po)); // 포인트변수는 8바이트
	printf("%d\n", sizeof(&a)); // 주소 담음 -> 8바이트
	printf("%d\n", sizeof(*po)); // 간접 참조, 정수형 4바이트

	return 0;
}