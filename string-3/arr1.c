#include <stdio.h>

int main()
{
	int A[6] = { 1,5,1,2,7,5 };

	for (int i = 0; i < 6; i++) // 6�� �ݺ�
		if ((i + 1) % 2 == 0) //Ȧ����°�� ��
		{
			printf("%d", A[i]); //Ȧ���� �� i��° �� ���
		}
	return 0;
}