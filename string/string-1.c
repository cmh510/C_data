#include <stdio.h>

int main()
{
	int i;
	char str[4]; //문자배열 4자리
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	// char str[4] = "abc";
	// char str[4] = {'a','b','c','\0'}; 모두 같은 결과
	i = 0;

	printf("%s\n", str); // 전체를 출력할 경우 문자열 입력
	/*for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);*/

	//while (str[i] != '\0')//반복문(null 값이 아닐때)
	//					//null 값을 만나면 끝남
	//{
	//	printf("%c", str[i]); // 1글자 -> %c
	//	i++; // 0~2방까지 계속 증가하면서 반복
	//}
	return 0;
}
