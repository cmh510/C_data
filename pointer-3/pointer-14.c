#include <stdio.h>
void ap1();// 함수 원형 선언
void ap2();
void ap3();
int main()
{
	ap1();
	ap2();
	ap3();
	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5 }; // 5개 정수형 방, 4바이트 * 5개 = 20 바이트
	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i); //배열명 자체는 주소의미
	printf("%p\n", &i[0]); //a[0]주소
	printf("%p\n", &i); //i주소
	// i == &i == &i[0] 모두 같음, &를 굳이 붙일 필요는 없음
	printf("%p\n\n", &i[1]); //i 1번째 방의 주소
	printf("%p\n\n", i + 1); //i의 1번째 방 주소
	printf("%p\n\n", &i[2]);
	printf("%p\n\n", i + 2);
	printf("%p\n\n", &i[3]);
	printf("%p\n\n", i + 3);
	return;//생략해도 됨
}
void ap2()
{
	int a[4];
	// a -> a의 첫주소
	//*a -> a가 가르키는 곳의 값, a[0] 주소로 가서 그 값
	*a = 111;
	*(a + 1) = 222; //a[1]=222;
	*(a + 2) = 333; 
	*(a + 3) = 444;
	printf("%d\n\n", *a);
	printf("%d\n\n", *(a + 1));
	printf("%d\n\n", *(a + 2));
	printf("%d\n\n", *(a + 3));
}
void ap3()
{
	int a[5] = { 10,20,30,40,50 };
	printf("%p %p %p\n\n", &a, &a[1], &a[2]);
	printf("%p %p %p\n\n", a, a + 1, a + 2);
	printf("%d %d %d\n\n", a[0], a[1], a[2]);
	printf("%d %d %d\n\n", *a, *(a + 1), *(a + 2));
}