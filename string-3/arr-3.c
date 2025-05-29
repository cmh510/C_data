#include <stdio.h>
int main()
{
	int a[10] = { 3,2,5,1,4,6,8,2,6,10 };
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 2)
			printf("%d", a[i]);
	}
	return 0;
}