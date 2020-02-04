/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 배열과 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
void input_ary(double* pa, int size);
double find_max(double* pa, int size);
// 메인함수
int main(void) 
{
	//printf("Hello World!\n");
 //   // type here.
 //   int ary[3];
 //   int i;

 //   *(ary + 0) = 10;
 //   *(ary + 1) = *(ary+0)+10;

 //   printf("세 번째 배열 요소에 키보드 입력 : ");
 //   scanf("%d", ary + 2);

 //   for  ( i= 0; i < 3; i++)
 //   {
 //       printf("%5d", *(ary + i));
 //   }

 //   int ary[3];
 //   int* pa = ary;
 //   int i;

 //   *pa = 10;
 //   *(pa + 1) = 20;
 //   pa[2] = pa[0] + pa[1];

 //   for ( i = 0; i < 3; i++)
 //   {
 //       printf("%5d", pa[i]);
 //   }

    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열의 최댓값 : %.1lf\n", max);

    


	system("pause");
	return EXIT_SUCCESS;
}

void input_ary(double* pa, int size) {
    int i;

    printf("%d개의 실수값 입력 : ", size);
    for ( i = 0; i < size; i++)
    {
        scanf("%lf", pa + i);
    }
}

double find_max(double* pa, int size)
{
    double max;
    int i;

    max = pa[0];
    for (i = 0; i < size; i++) {
        if (pa[i] > max)max = pa[i];
    }
    return max;
 
}