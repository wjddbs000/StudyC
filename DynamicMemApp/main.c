/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� , ���� �޸� �Ҵ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    //printf("���� 16-1 \n\n");

 //   int* pi;
 //   double* pd;

 //   pi = (int*)malloc(sizeof(int));
 //   if (pi == NULL) {
 //       printf("# �޸𸮰� �����մϴ�.");
 //       exit(1);
 //   }
 //   pd = (double*)malloc(sizeof(double));

 //   *pi = 10;
 //   *pd = 3.4;

 //   printf("���������� ��� : %d\n", *pi);
 //   printf("�Ǽ������� ��� : %.1lf\n", *pd);

 //   free(pi);
 //   free(pd);
    //printf("���� 16-2.c \n\n");

    //int* pi;
    //int i, sum = 0;

    //pi = (int*)malloc(5 * sizeof(int));
    //if (pi == NULL) {
    //    printf("# �޸𸮰� �����մϴ�.");
    //    exit(1);
    //}
    //printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
    //for (i = 0; i < 5; i++)
    //{
    //    scanf("%d", &pi[i]);
    //    sum += pi[i];
    //}
    //printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
    //free(pi);
    printf("���� 16-3.c \n\n");

    int* pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int));
    if (pi == NULL) {
        printf("# �޸𸮰� �����մϴ�.");
        exit(1);
    }
    while (1) {
        printf("����� �Է��ϼ��� => ");
        scanf("%d", &num);
        if (num <= 0)break;
        if (count == size) {
            size += 5;
            pi = (int*)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for ( i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }
    free(pi);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}