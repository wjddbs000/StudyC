/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,포인터 스왑
  --------------------------------------------------------------------------------
  first created - 2020.02.06.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_ptr(char** ppa, char **ppb);

// 메인함수
int main(void) 
{
	printf("예제 15-2\n\n");

    char* pa = "success";
    char* pb = "failure";

    printf("pa -> %s, pb ->%s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb ->%s\n", pa, pb);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

void swap_ptr(char** ppa, char **ppb) {
    char* temp;

    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}