/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.06.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
	printf("���� 15-9\n\n");
    // type here.
    int a = 10;
    double b = 3.5;
    void* vp;
    vp = &a;
    printf("a : %d\n", *(int*)vp);
    vp = &b;
    printf("b : %d\n", *(double*)vp);
    
    system("pause");
	return EXIT_SUCCESS;
}