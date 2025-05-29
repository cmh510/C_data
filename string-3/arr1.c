#include <stdio.h>

int main()
{
	int A[6] = { 1,5,1,2,7,5 };

	for (int i = 0; i < 6; i++) // 6번 반복
		if ((i + 1) % 2 == 0) //홀수번째의 방
		{
			printf("%d", A[i]); //홀수일 때 i번째 방 출력
		}
	return 0;
}