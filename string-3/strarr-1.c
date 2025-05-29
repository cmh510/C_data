#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	char ex[4][5] = {
	"abc",
	"xyz",
	"kkk",
	"love"
	};

	printf("%c\n", ex[1][2]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);
	scanf(" %c", &ex[0][3]);
	printf("%c\n", ex[0][3]);
	printf("%s\n", ex[0]);
	scanf("%s", ex[2]);
	printf("%s\n", ex[2]);
	return 0;
}