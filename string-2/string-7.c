#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	char key[] = "C";
	char buffer[80] = "";

	do {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����? ");
		gets(buffer);//����Ű ĥ ������ ���� ���
	} while (strcmp(key, buffer) != 0); //���Ѵ�, ���� ������ �ݺ�
									//!= 0 => ���� ������, �� ���� ���� �� ������ ��ȯ ���� 0.
	//strcpy : ����(����)
	//strcat : ����
	//strcmp : ���� ��

	printf("�¾ҽ��ϴ�!");

	return 0;
}