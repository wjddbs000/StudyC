/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020...
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    int a;
    printf("양수 입력 : ");
    scanf("%d",&a);
    int* b = (int*)malloc(a);
    for (int i = 2; i < a; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) { b[i-2] = 'X'; break; }
        }
    }

    for (int i = 2; i < a; i++)
    {
        if (b[i-2] == 'X') { printf("%c\t", 'X'); }
        else printf("%d\t", i);
        if ((i-1) % 5 == 0)printf("\n");
    }
    printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}