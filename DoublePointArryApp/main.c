/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,
  --------------------------------------------------------------------------------
  first created - 2020...
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_str(char** pps, int cnt);

// 메인함수
int main(void) 
{
	printf("예제 15-3\n\n");

    char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };
    int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);

    print_str(ptr_ary, count);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

void print_str(char** pps, int cnt) {
    int i; for ( i = 0; i < cnt; i++)
    {
        {
            printf("%s\n", pps[i]);
        }
    }
}