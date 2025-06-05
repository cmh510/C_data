#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point { // 구조체 선언(point)
	int x; //정수형
	int y; //정수형
};

struct rect { //구조체 선언(rect)
	struct point p1; //구조체 안에 구조체 포함
	struct point p2;
};

int main()
{
	struct rect r; // 구조체 변수 선언(r)
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오: "); // ex) 10 10
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y); // ex) 20 20

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;
	
	area = w * h;
	peri = 2 * w + 2 & h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}