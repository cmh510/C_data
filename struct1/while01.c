#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 10000;
	int mo;
	char gu;
	char q;
	while (1) {
		printf("금액을 입력하세요 : ");
		scanf("%d", &mo);

		printf("입금이면 a, 출금이면 b를 입력해주세요 : ");
		scanf(" %c", &gu);
		switch (gu) // 조건을 갖고 있는 변수
		{
		case 'a': //조건 a 이면 입금
			sum += mo;
			printf("입금 완료, 현재 잔액 : %d\n", sum);
			break;
		case 'b':
			sum -= mo;
			printf("출금 완료, 현재 잔액 : %d\n", sum);
			break;
		default:
			printf("잘못입력하셨습니다.\n");
		}//switch
		printf("작업을 종료하시겠습니까? (Y/N)\t");
		scanf(" %c", &q);
		if (q == 'Y' || q == 'y')
			break;
	}//while
	printf("작업을 종료합니다.");
	return 0;
}