#include <stdio.h>
//���� : �޸� ����
union example {//union : ����ü, struct : ����ü
	int i; 
	char c;
};

int main()
{
	union example v; // ����ü ���� ����
	
	v.c = 'A';
	printf("v.c:%c	v.i%i\n", v.c, v.i);
	//���� ���� �ʱ�ȭ
	v.i = 10000;
	printf("v.c:%c	v.i%i\n", v.c, v.i);
	return 0;
}