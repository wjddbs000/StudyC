/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���� ���� �˰���
  --------------------------------------------------------------------------------
  first created - 2020.02.11.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
	printf("���� ���� �˰���\n\n");
    // type here.

    int a[5] = { 3,2,1,6,5 };
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}