#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //strcpy, strcat
#include <stdio.h>
int main()
{
	char a[11] = "KOREA"; //�ڿ�NULL(\0) ä����
	char b[] = "12345"; //6�� ��� ���� �迭

	strcat(a, b); //b�� a ���� �ٿ� ����.
				//null���� �����ϰ� ����, ���̿� ����(��)�� ����
	puts(a); //���ڿ� ���, �� �ٲ� ����
	printf("%s", b);
	return 0;
}
//int main()
//{
//	char string[80];
//	// string ="~~"; => ����
//	strcpy(string, "Hello world from "); //����
//	strcat(string, "strcpy "); //���� �ٿ��ִ´�.
//	strcat(string, "and ");
//	strcat(string, "strcat! ");
//	printf("string = %s\n", string);
//	return 0;
//}