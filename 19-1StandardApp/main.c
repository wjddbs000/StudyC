/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,전처리 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"student.h"
// 메인함수
int main(void) 
{
	//printf("예제 19-1.c\n\n");
 //   // type here.

 //   Student s1 = { 315,"홍길동" };
 //   
 //   printf("학번 : %d, 이름 : %s\n", s1.num, s1.name);

    //printf("예제 19-2.c\n\n");
    //double radius, area;
    //printf("반지름 입력(100이하) : ");
    //scanf("%lf", &radius);
    //if (radius > LIMIT) ERR_PRN;
    //
    //else {
    //    area = PI * radius * radius;
    //    printf("원의 면적 : %.2lf (%s)\n", area, MSG);
    //}

    //printf("예제 19-3.c\n\n");

    //int a = 10, b = 20;
    //double x = 30, y = 40;
    //int res;

    //printf("a+b=%d\n", SUM(a, b));
    //printf("x+y=%lf\n", SUM(x, y));
    //res = 30 / MUL(2, 5);
    //printf("res : %d\n", res);
    //
    //printf("예제 19-5.c\n\n");
    //int a1, a2;
    //NAME_CAT(a, 1) = 10;
    //NAME_CAT(a, 2) = 20;
    //
    //PRINT_EXP(a1 + a2);
    //PRINT_EXP(a2 - a1);
    printf("예제 19-6.c\n\n");

    int max;

#if VER >= 6 
    printf("버전 %d 입니다.\n", VER);
#endif // VER >= 6 

#if BIT == 16
    max = 32767;
#else
    max = 2147483647;
#endif // BIT16

    printf("int형 변수의 최댓값 : %d\n", max);
    system("pause");
	return EXIT_SUCCESS;
}