/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �迭�� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.04.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
void input_ary(double* pa, int size);
double find_max(double* pa, int size);
// �����Լ�
int main(void) 
{
	//printf("Hello World!\n");
 //   // type here.
 //   int ary[3];
 //   int i;

 //   *(ary + 0) = 10;
 //   *(ary + 1) = *(ary+0)+10;

 //   printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
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
    printf("�迭�� �ִ� : %.1lf\n", max);

    


	system("pause");
	return EXIT_SUCCESS;
}

void input_ary(double* pa, int size) {
    int i;

    printf("%d���� �Ǽ��� �Է� : ", size);
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