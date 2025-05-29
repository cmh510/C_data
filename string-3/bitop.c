#include <stdio.h>
int main()
{
	//논리연산자(참이면 1, 거짓이면 0)
	printf("논리 and=> %d\n", 1 && 0); // 둘 다 참일때 참
	printf("논리 or => %d\n", 1 || 0); // 둘 중 하나만 참이면 참

	//비트연산자
	int num1 = 16, num2 = 80;
	printf("비트 and=> %d\n", num1 & num2);
	printf("비트 and=> %d\n", num1 | num2);
	printf("비트 and=> %d\n", num1 ^ num2);
	//논리연산자 and(&&)는 둘 다 만족 or(||)는 둘 중 하나만 만족
	//비트연산자 &(and)는 둘 다 11은 1 나머지 0
	//비트연산자 |(or)는 둘 중 하나 1이면 1
	//비트연산자 ^(xor)는 두 비트가 같으면 0, 다르면 1
	return 0;
}