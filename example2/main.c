/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020...
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    int a,b;
    printf("���� �Է� : ");
    scanf("%d", &a);
    if (a > 100 || a < 0) { printf("errer\n"); exit(1); }
    
    b = a / 10;
    
    switch (b)
    {
    case 10:
    case 9:
        printf("A\n"); break;
    case 8:
    case 7:
        printf("B\n"); break;
    case 6 : printf("C\n"); break;
    case 5 : printf("D\n"); break;
    default: printf("F\n"); break;
    }

	system("pause");
	return EXIT_SUCCESS;
}