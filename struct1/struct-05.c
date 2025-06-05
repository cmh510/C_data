#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100];
	char a; // 1글자
	int i = 1;
	int k = 0; // 배열의 위치를 알려주는 변수
	while (i) // i가 1이고, 1이면 참, 조건이 만족(참)일때 반복, while(1)이면 무한반복
	{
		printf("%d번째, 학번을 입력하시오 : ", k + 1);
		scanf("%d", &list[k].number);
		printf("%d번째, 이름을 입력하시오 : ", k + 1);
		scanf("%s", list[k].name);
		printf("%d번째, 학점을 입력하시오 : ", k + 1);
		scanf("%lf", &list[k].grade);
		printf("학번 : %d\t 이름 : %s\t 학점 : %f", list[k].number, list[k].name, list[k].grade);
		k += 1;
		printf("=============================\n");
		printf("작업을 종료하시겠습니까? (Y / N)");
		scanf(" %c", &a); // 1글자(1바이트) 입력받을 때에는 (띄어쓰기)%c라고 입력한다.		" %c"
		if (a == 'Y' || a == 'y')
			i = 0;
	} //while
	// 논리연산자(참/거짓) => AND : &&, OR : ||
	// 비트연산자(이진수 0, 1 계산) => AND : &, OR : |
	printf("\n작업을 종료합니다.");
	return 0;
}