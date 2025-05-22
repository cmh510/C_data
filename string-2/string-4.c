#include <stdio.h>
int main()
{
	char str[30] = "C language";
	int i = 0;

	while (str[i] != '\0') //만족할 때
		i++;

	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
	return 0;
}
// \n 다음 줄
// \t tap 만큼 띄우기
// \" => " 출력
// \' => 출력