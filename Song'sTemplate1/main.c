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
    int arry[5];
    arry[1] = "bear";   
 

    printf("%s\n",arry[1]);
    printf("%p\n", &arry[1]);
    
    system("pause");
	return EXIT_SUCCESS;
}