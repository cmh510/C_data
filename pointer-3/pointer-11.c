#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);
int main()
{
	int i = 777;
	call_value(i); //�Լ�ȣ��
	printf("�� ȣ�� : %d\n", i); //777(i�� ��)

	call_refer(&i); //�Լ�ȣ��
	printf("���� ȣ�� : %d\n", i); //888(i�� �ּ�)
	return 0;
}

void call_value(int icopy) //icopu�� �ٲ� i�� ���� �ٲ��� ����
{
	icopy = 888;
}

void call_refer(int* ip)//ip�� i�ּ� ����Ŵ, ip ���� �ٲ�� i�� ���� �ٲ�
{
	*ip = 888; // �ּҰ� ����Ű�� ��
}
