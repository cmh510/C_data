#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);
int main()
{
	int i = 777;
	call_value(i); //함수호출
	printf("값 호출 : %d\n", i); //777(i의 값)

	call_refer(&i); //함수호출
	printf("참조 호출 : %d\n", i); //888(i의 주소)
	return 0;
}

void call_value(int icopy) //icopu가 바뀌어도 i의 값은 바뀌지 않음
{
	icopy = 888;
}

void call_refer(int* ip)//ip가 i주소 가르킴, ip 값이 바뀌면 i도 같이 바뀜
{
	*ip = 888; // 주소가 가르키는 값
}
