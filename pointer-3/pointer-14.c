#include <stdio.h>
void ap1();// �Լ� ���� ����
void ap2();
void ap3();
int main()
{
	ap1();
	ap2();
	ap3();
	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5 }; // 5�� ������ ��, 4����Ʈ * 5�� = 20 ����Ʈ
	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i); //�迭�� ��ü�� �ּ��ǹ�
	printf("%p\n", &i[0]); //a[0]�ּ�
	printf("%p\n", &i); //i�ּ�
	// i == &i == &i[0] ��� ����, &�� ���� ���� �ʿ�� ����
	printf("%p\n\n", &i[1]); //i 1��° ���� �ּ�
	printf("%p\n\n", i + 1); //i�� 1��° �� �ּ�
	printf("%p\n\n", &i[2]);
	printf("%p\n\n", i + 2);
	printf("%p\n\n", &i[3]);
	printf("%p\n\n", i + 3);
	return;//�����ص� ��
}
void ap2()
{
	int a[4];
	// a -> a�� ù�ּ�
	//*a -> a�� ����Ű�� ���� ��, a[0] �ּҷ� ���� �� ��
	*a = 111;
	*(a + 1) = 222; //a[1]=222;
	*(a + 2) = 333; 
	*(a + 3) = 444;
	printf("%d\n\n", *a);
	printf("%d\n\n", *(a + 1));
	printf("%d\n\n", *(a + 2));
	printf("%d\n\n", *(a + 3));
}
void ap3()
{
	int a[5] = { 10,20,30,40,50 };
	printf("%p %p %p\n\n", &a, &a[1], &a[2]);
	printf("%p %p %p\n\n", a, a + 1, a + 2);
	printf("%d %d %d\n\n", a[0], a[1], a[2]);
	printf("%d %d %d\n\n", *a, *(a + 1), *(a + 2));
}