#include <stdio.h>
//���� ���� ȣ��
void swap(int x, int y); // �Լ� ����
int main()
{
	int a = 100, b = 200;
	printf("a=%d b=%d\n", a, b); //100, 200

	swap(a, b); // �Լ� ȣ��

	printf("a=%d b=%d\n", a, b);
	return 0;
}
void swap(int x, int y)
{
	int tmp;
	printf("x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d y=%d\n", x, y);
}
