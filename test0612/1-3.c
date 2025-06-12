#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char class; //반
	int num; //번호
	int c; //c언어 점수
	int java; //자바 점수
	int pyth; //파이썬 점수
	int tot; //총점
	double avg; //평균점수
	char e;
	/*int k = 1;*/
	while (1)
	{
		printf("학번을 입력하세요 : ");
		scanf("%d", &num);
		printf("반(A~C)을 입력하세요 : ");
		scanf(" %c", &class);
		printf("c언어 점수를 입력하세요 : ");
		scanf("%d", &c);
		printf("자바 점수를 입력하세요 : ");
		scanf("%d", &java);
		printf("파이썬 점수를 입력하세요 : ");
		scanf("%d", &pyth);

		tot = c + java + pyth;
		avg = tot / (double)3;
		printf("총점 : %d\t 평균 : %.2f\n", tot, avg);

		printf("--------------------------------\n");
		printf("계산을 종료하시겠습니까?(y/n)");
		scanf(" %c", &e);
		if (e == 'y' || e == 'Y')
		{
			printf("계산을 종료합니다.");
			/*k = 0;*/
			break;
		}//if
	} //while 
	return 0;
}