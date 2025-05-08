#include <stdio.h>
int main()
{
//return 없거나 return; 경우 -> void 함수명()	
	int i = 3000;
	int* p = NULL; //*는 일반 변수가 아닌 포인터 변수라고 선언함

	p = &i; // p는 i주소 기억
	printf("p = %p\n", p); //p가 포인터변수이므로 주소 출력
	printf("&i = %p\n\n", &i); // i는 일반변수, &는 주소 출력(%p)
	printf("i = %d\n", i); // 값 출력
	printf("*p = %d\n", *p); //간접 참조 연산자 * : 포언티변수가 가리키는 주소가 가서 그 값을 가져옴

	return 0;
}
