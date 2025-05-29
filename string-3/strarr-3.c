#define page 5 // 기호상수, page를 5라고 정의함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //str~ 문자열 함수 포함, strcmp 사용
int main()
{
	int i, index;
	char dic[page][2][30] = { //3차원, 5면 / 2행 / 30열 구성
		//0행	1행
		{"book", "책"}, // 0면
		{"boy", "소년"}, // 1면
		{"computer", "컴퓨터"}, // 2면
		{"apple", "사과"}, // 3면
		{"rain", "비"}, }; // 4면
	char word[30]; // 30열 선언 -> 입력 받을 글자 배열 선언
	printf("단어를 입력하시오:");
	scanf("%s", word); //29글자이내 글자 입력, 문자배열 이름만 쓰는 경우 그 자체가 주소를 의미하기에 &를 쓰지 않음.
	for (i = 0; i < page; i++) // 5번 반복
	{
		if (strcmp(dic[i][0], word) == 0) // 각 면마다 0행의 영어 단어와 비교
			//strcmp : 문자열 비교, 같은 것이 있으면 0 발생
		{
			printf("%s: %s\n", word, dic[i][1]); // 해당하는 면의 1행을 출력
			return 0;
		}
	}
	printf("사전에서 발견되지 않았습니다.\n");
}