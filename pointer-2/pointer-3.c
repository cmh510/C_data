#include <stdio.h> //전처리기, printf를 사용하기 위한 헤더파일

int main() // main, c 언어의 시작, 무조건 하나만, return 뒤에 오는 값이 정수형
{
	int i = 10; // 정수형 변수 i에 10 값 저장
	double f = 12.3; // 실수형 8바이트 변수 f에 12.3 값 저장
	int* pi = NULL; // 실수형 주소 변수 pi NULL값으로 초기화

	double* pf = NULL; // 실수형 주소 변수 pf NULL값으로 초기화
	pi = &i; // pi에 i의 주소 값 저장
	pf = &f; // pf에 f의 주소 값 저장
	pf = &i;
	printf("%d %p %d\n", *pi, &i, i); // %p : 주소 출력, %d : 정수 출력, 지정된 주소의 변수, 주소 변수 출력
	printf("%p %p %lf\n", pf, &f, f);// %lf : double 출력
	return 0; // 성공적으로 마무리
}
// int i 정수형 변수 : 값을 기억
// int &j 정수형을 가르키는 주소 기억, 포인터변수
// i -> 값
// &i -> 주소
// j -> 포인터변수이므로 주소
//