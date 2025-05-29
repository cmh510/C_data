#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	char fruits[3][20]; // fruits라는 이름의 3열 20행 문자열 변수 선언
	for (i = 0; i < 3; i++) { // 반복문, 총 3번 반복
		printf("과일 이름을 입력하시오: ");
		scanf("%s", fruits[i]); // 문자열 입력 받기, fruits i행에 저장
	}
	for (i = 0; i < 3; i++) // 반복문, 총 3번 반복
		printf("%d번째 과일: %s\n", i, fruits[i]); // i번째 과일, fruits의 i번째 행 출력
	return 0;
}