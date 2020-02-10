/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 ,파일 열고 받기
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
	printf("예제 18-1.c\n\n");
    // type here.

    FILE* fp;

    fp = fopen("a.txt", "r");

    if (fp == NULL)
    {
        printf("파일오픈 실패");

        return EXIT_FAILURE;
    }

    printf("파일오픈 성공\n");
    fclose(fp);


    system("pause");
	return EXIT_SUCCESS;
}