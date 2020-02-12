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
#include "calc.h"
// 메인함수
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    puts("┌──────────────────┐");
    puts("│  정적 라이브러리 │");
    puts("└──────────────────┘");
    
    int data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int result = get_total(data, 10);
    
    printf("Result is %d\n", result);

    system("pause");
	return EXIT_SUCCESS;
}