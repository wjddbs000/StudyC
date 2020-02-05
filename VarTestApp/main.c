/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,변수 사용영역
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void assign(void);

// 메인함수
int main(void) 
{
	printf("Hello World!\n");

    auto int a = 10,b=20;
    printf("교환전 %d, %d\n", a, b);
    {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("교환후 %d, %d \n", a,b);
    
	system("pause");
	return EXIT_SUCCESS;
}


void assign(void) {
    int a;
    a = 10;

    printf("assign 함구 a : %d\n", a);
    return;
}