#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i < 16; i = i + 3)
	{
		printf("%d��\t\t %d��\t\t %d��\n", i, i + 1, i + 2); 
		for (j = 1; j < 10; j++)
		{						//%2d -> 2�ڸ��� ����������
			printf("%d * %d = %2d\t ", i, j, i * j);
			printf("%d * %d = %2d\t ", (i +1), j, (i + 1) * j);
			printf("%d * %d = %2d\n", (i +2), j, (i + 2) * j);
		}//for
		printf("\n\n");
	}//for
	return 0;
}