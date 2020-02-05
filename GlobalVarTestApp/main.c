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

void assign10(void);
void assign20(void);

int a;

// 메인함수
int main(void) 
{
	printf("Hello World!\n\n");

    a = 0;
    printf("호출전 a의 값 : %d\n", a);

    assign10();
    assign20();

    printf("호출후 a의 값 : %d\n", a);
    
    system("pause");
	return EXIT_SUCCESS;
}

void assign10() {
    a = 10;
}

void assign20() {
    int a;
    a = 20;
}