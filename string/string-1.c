#include <stdio.h>

int main()
{
	int i;
	char str[4]; //���ڹ迭 4�ڸ�
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	// char str[4] = "abc";
	// char str[4] = {'a','b','c','\0'}; ��� ���� ���
	i = 0;

	printf("%s\n", str); // ��ü�� ����� ��� ���ڿ� �Է�
	/*for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);*/

	//while (str[i] != '\0')//�ݺ���(null ���� �ƴҶ�)
	//					//null ���� ������ ����
	//{
	//	printf("%c", str[i]); // 1���� -> %c
	//	i++; // 0~2����� ��� �����ϸ鼭 �ݺ�
	//}
	return 0;
}
