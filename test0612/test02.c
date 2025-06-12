#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i < 13; i = i + 4)
	{
		printf("%d단\t\t %d단\t\t %d단\t\t %d단\n", i, i + 1, i + 2, i + 3);
		for (j = 1; j < 10; j++)
		{						//%2d -> 2자리수 오른쪽정렬
			printf("%2d  *  %d =  %2d\t ", i, j, i * j);
			printf("%2d  *  %d =  %2d\t ", (i + 1), j, (i + 1) * j);
			printf("%2d  *  %d =  %2d\t ", (i + 2), j, (i + 2) * j);
			printf("%2d  *  %d =  %2d\n", (i + 3), j, (i + 3) * j);
		}//for
		printf("\n");
	}//for
	return 0;
}