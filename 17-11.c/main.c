/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� ,������ enum
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum season {
    SPRING,
    SUMMER,
    FALL,
    WINTER
};

// �����Լ�
int main(void) 
{
	printf("���� 17-11.c\n\n");
    // type here.

    enum season ss;
    char* pc = NULL;
    
    ss = SPRING;
    switch (ss)
    {
    case SPRING:
        pc= "inline"; 
        break;
    case SUMMER: 
        pc = "swimming"; 
        break;
    case FALL:
        pc = "trop";
        break;
    case WINTER:
        pc = "skiing";
        break;
    default:
        pc = "error";
        break;
    }

    printf("���� ���� Ȱ�� = > %s\n", pc);


	system("pause");
	return EXIT_SUCCESS;
}