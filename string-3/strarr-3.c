#define page 5 // ��ȣ���, page�� 5��� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //str~ ���ڿ� �Լ� ����, strcmp ���
int main()
{
	int i, index;
	char dic[page][2][30] = { //3����, 5�� / 2�� / 30�� ����
		//0��	1��
		{"book", "å"}, // 0��
		{"boy", "�ҳ�"}, // 1��
		{"computer", "��ǻ��"}, // 2��
		{"apple", "���"}, // 3��
		{"rain", "��"}, }; // 4��
	char word[30]; // 30�� ���� -> �Է� ���� ���� �迭 ����
	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", word); //29�����̳� ���� �Է�, ���ڹ迭 �̸��� ���� ��� �� ��ü�� �ּҸ� �ǹ��ϱ⿡ &�� ���� ����.
	for (i = 0; i < page; i++) // 5�� �ݺ�
	{
		if (strcmp(dic[i][0], word) == 0) // �� �鸶�� 0���� ���� �ܾ�� ��
			//strcmp : ���ڿ� ��, ���� ���� ������ 0 �߻�
		{
			printf("%s: %s\n", word, dic[i][1]); // �ش��ϴ� ���� 1���� ���
			return 0;
		}
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
}