#include <stdio.h>
int main()
{
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20; //* => ����ϰ� �ִ� �ּҿ� ���� �� ���� �ǹ�, �� ���� 20 ����
	printf("i = %d\n", i); // 20 ���
	
	int a = 10;
	int* po;
	p = &a; //a�ּ� = po�� ����ϴ� ��
	//sizeof() : ()���� ũ��
	printf("%d\n", sizeof(a)); // 4����Ʈ
	printf("%d\n", sizeof(po)); // ����Ʈ������ 8����Ʈ
	printf("%d\n", sizeof(&a)); // �ּ� ���� -> 8����Ʈ
	printf("%d\n", sizeof(*po)); // ���� ����, ������ 4����Ʈ

	return 0;
}