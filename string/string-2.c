#include <stdio.h>
int main()
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the capital city of Korea.";
	printf("%s %s %s\n", str1, str2, str3);
	
	//문자 배열의 선언과 초기화
	char a[3] = { 'h', 'i' }; // 낱개로 사용하거나 숫자를 입력할 때는 반드시 중괄호{} 입력
	char b[10] = { "hello" };
	char c[10] = "what's up";

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);

	//종료문자 들어갈 자리가 없을 경우
	char i[2] = { 'h', 'i' };
	char k[9] = "what's up";
	printf("%s\n", i);
	printf("%s\n", k);
	return 0;
}