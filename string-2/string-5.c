#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ� :");
	gets(name); //gets_s(name, sizeof(name));
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ� :");
	gets(address); //gets_s(address, sizeof(address));

	puts(name); // �� �ٲ��� �ڵ����� ������.
	puts(address);

	return 0;
}

//#include <stdio.h>
//int main()
//{
//	int ch; //�������� ����, ASCII�ڵ�� ���
//	ch = getchar(); //ù ��° 1���ڸ� �Է¹޴´�.
//	putchar(ch); // 1���ڸ� ����Ѵ�.
//
//	return 0;
//}