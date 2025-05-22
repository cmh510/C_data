#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //strcpy, strcat
#include <stdio.h>
int main()
{
	char a[11] = "KOREA"; //뒤에NULL(\0) 채워짐
	char b[] = "12345"; //6개 요소 갖는 배열

	strcat(a, b); //b를 a 끝에 붙여 넣음.
				//null값을 제거하고 연결, 사이에 공백(띄어씀)이 없음
	puts(a); //문자열 출력, 줄 바꿈 포함
	printf("%s", b);
	return 0;
}
//int main()
//{
//	char string[80];
//	// string ="~~"; => 오류
//	strcpy(string, "Hello world from "); //복사
//	strcat(string, "strcpy "); //끝에 붙여넣는다.
//	strcat(string, "and ");
//	strcat(string, "strcat! ");
//	printf("string = %s\n", string);
//	return 0;
//}