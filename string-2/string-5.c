#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char name[100];
	char address[100];

	printf("이름을 입력하시오 :");
	gets(name); //gets_s(name, sizeof(name));
	printf("현재 거주하는 주소를 입력하시오 :");
	gets(address); //gets_s(address, sizeof(address));

	puts(name); // 줄 바꿈이 자동으로 들어가있음.
	puts(address);

	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int ch; //정수형에 주의, ASCII코드로 기억
//	ch = getchar(); //첫 번째 1문자를 입력받는다.
//	putchar(ch); // 1문자를 출력한다.
//
//	return 0;
//}