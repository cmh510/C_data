#include <stdio.h>
//참조에 의한 호출
void swap(int* px, int* py);
int main()
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b);

	swap(&a, &b);

	printf("a=%d b=%d\n", a, b);
	return 0;
}
void swap(int* px, int* py)
{
	int tmp;

	tmp = *px; //px가 a주소를 가리키고 있음, 값 : 100
	*px = *py; //py가 b주소를 가리키고 있음, 값 : 200
	//px의 주소인 a에 값 저장
	*py = tmp;// py의 주소인 b에 값 저장
}