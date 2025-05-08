#include <stdio.h>
int main()
{
	int* pnum, num1 = 200, num2 = 300;
	// pnum은 정수 포인터 변수
	// num1, num2는 정수형 변수
	pnum = &num1;
	(*pnum) += 40;
	pnum = &num2;
	(*pnum) += 50;
	printf("num1=%d  num2=%d\n", num1, num2);
	// 연결된 주소를 바꾸기 전까지는 계속 실시간 저장(아마도)
	return 0;
}
