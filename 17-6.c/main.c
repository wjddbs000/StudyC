/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,구조체 포인터의 사용
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score
{
    int kor;
    int eng;
    int math;
};
// 메인함수
int main(void) 
{
	printf("예제 17-6.c\n\n");
    // type here.
    struct score yuni = { 90,80,70 };
    struct score *ps = &yuni;

    printf("국어 %d\n", (*ps).kor);
    printf("영어 %d\n", ps->eng);
    printf("수학 %d\n", ps->math);

	system("pause");
	return EXIT_SUCCESS;
}