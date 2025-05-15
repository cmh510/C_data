//이중 포인터 프로그램
#include <stdio.h>
//포인터를 선언할 때 *를 두 번 사용하면 포인터의 포인터(이중 포인터)를 선언한다.
//자료형 ** 포인터 이름; ex) int** q;
int main()
{
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200; //역참조
	printf("i=%d\n", i);

	**q = 300;
	printf("i=%d\n", i);

	return 0;
}
