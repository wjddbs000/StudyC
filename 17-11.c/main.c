/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 ,열거형 enum
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

// 메인함수
int main(void) 
{
	printf("예제 17-11.c\n\n");
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

    printf("나의 레저 활동 = > %s\n", pc);


	system("pause");
	return EXIT_SUCCESS;
}