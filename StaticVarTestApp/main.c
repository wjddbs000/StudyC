/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,정적 지역 변수
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void auto_func(void);
void static_func(void);

// 메인함수
int main(void) 
{
	printf("Hello World!\n\n");

    printf("일반 지역변수(auto)를 사용한 함수...\n");

    for (int i = 0; i < 3; i++)
    {
        auto_func();
    }
    printf("정적 지역변수(static)를 사용한 함수...\n");

    for (int i = 0; i < 3; i++)
    {
        static_func();
    }

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}
void auto_func(void) {
    auto int a = 0;
    a++;
    printf("a:%d\n", a);
}

void static_func(void) {
    static int a = 0;
    a++;
    printf("a:%d\n", a);
}