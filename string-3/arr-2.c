#include <stdio.h>
void proc(int a[], int b);
int main()
{
	int a[6] = { 3,2,5,1,4,6 }; //24����Ʈ
	proc(a, 0);
}
void proc(int a[], int b) // �Լ� ����, �μ��� ���� ���� �� ����
{
	int i;
	if (b > 1)
	{
		return;
	}
	else //b�� 1���� ũ�� �����Ƿ�
		for (i = 0; i < 6; i++) // 6�� �ݺ�
			printf("%d", a[i]);
}