#include <stdio.h>
//������ ���� ȣ��
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

	tmp = *px; //px�� a�ּҸ� ����Ű�� ����, �� : 100
	*px = *py; //py�� b�ּҸ� ����Ű�� ����, �� : 200
	//px�� �ּ��� a�� �� ����
	*py = tmp;// py�� �ּ��� b�� �� ����
}