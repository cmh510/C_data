#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	char fruits[3][20]; // fruits��� �̸��� 3�� 20�� ���ڿ� ���� ����
	for (i = 0; i < 3; i++) { // �ݺ���, �� 3�� �ݺ�
		printf("���� �̸��� �Է��Ͻÿ�: ");
		scanf("%s", fruits[i]); // ���ڿ� �Է� �ޱ�, fruits i�࿡ ����
	}
	for (i = 0; i < 3; i++) // �ݺ���, �� 3�� �ݺ�
		printf("%d��° ����: %s\n", i, fruits[i]); // i��° ����, fruits�� i��° �� ���
	return 0;
}