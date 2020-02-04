/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - JeongYun Song
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    //int a = 0;
    //double b = 0;
    //char c = 65;

    //printf("a의 주소 : %u\n", &a);
    //printf("b의 주소 : %u\n", &b);
    //printf("c의 주소 : %u\n", &c);

    /*int a = 10, b = 20, total;
    double avg;
    int* pa, * pb;
    int* pt = &total;
    double* pg = &avg;
    pa = &a;
    pb = &b;
    *pt = *pa + *pb;
    *pg = *pt / 2.0;
    
    printf("두 정수값 : %d, %d\n", *pa, *pb);
    printf("합 : %d\n", *pt);
    printf("평균 : %.1lf\n", *pg);
    /*int a = 10, b = 20;
    const int* pa = &a;

    printf("a 값 : %d\n", *pa);
    pa = &b;
    printf("b 값 : %d\n", *pa);
    pa = &a;
    printf("a 값 : %d\n", *pa);

    char ch = 'A';
    int in = 10;
    double db = 10.4;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("ch size : %u\n",sizeof(ch));
    printf("in size : %u\n",sizeof(in));
    printf("db size : %u\n",sizeof(db));

    printf("char * 포인터의 크기 : %d\n", sizeof(pc));
    printf("int * 포인터의 크기 : %d\n", sizeof(pi));
    printf("double * 포인터의 크기 : %d\n", sizeof(pd));

    printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd)); */

    int a = 10;
    int* pa = &a;
    double* pd = pa;

    printf("a : %d\n", a);
    printf("pa : %d\n", *pa);
    printf("pd : %lf\n", *pd);

    system("pause");
	return EXIT_SUCCESS;
}