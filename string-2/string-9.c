#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //문자열 함수 포함
#include <string.h>
int main()
{			//행에는 null값 필요 x
	char name[5][10]; //name에 들어갈 문자열 개수(이름 개수), 5명의 9자
	char addr[5][30]; //addr에 들어갈 문자열 개수(주소 개수), 5명의 29자
	char search[10]; //10자
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("이름%d번째 :", i + 1); // i == 0, 출력문에는 첫번째 뜻으로 1을 출력
		scanf("%s", name[i]);
		printf("주소%d번째 :", i + 1);
		scanf("%s", addr[i]);
	}
	printf("검색할 이름 입력하세요 :");
	scanf("%s", search);

	for (i = 0; i < 5; i++)
	{	//strcmp : 문자끼리의 비교
		if (strcmp(name[i], search) == 0)
		{
			printf("이름 : %s, 주소 : %s\n", name[i], addr[i]);
			return 0;
		}
	}
	printf("찾는 이름이 없습니다.");
	return 0;
}
//scanf("%s", a[1]);
//scnaf("%s", b[1][2]);
//scnaf("%s",