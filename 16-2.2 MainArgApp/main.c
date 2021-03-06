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
int main(int argc,char **argv) 
{
    printf("예제 16-6.c \n\n");

    if (argc <= 1) {
        printf("명령 구문이 올바르지 앖습니다.\n");
        exit(1);
    }
    char* intarg[2];
    int j=0;
    for ( int i = 0; i < argc; i++)
    {
        if (i == 0) { continue; }
        intarg[j] = (char*)malloc(strlen(argv[i]) + 1);
        strcpy(intarg[j], argv[i]);
        j++;
    }

    printf("첫번째 명령인수 %s\n", intarg[0]);
    printf("두번째 명령인수 %s\n", intarg[1]);

    for (int i = 0; i < 2; i++)
    {
        free(intarg[i]);
    }

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}