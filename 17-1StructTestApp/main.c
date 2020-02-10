/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,사용자 정의 정의형 structure 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int num;
    double grade;
};

// 메인함수
int main(void) 
{
	printf("예제17-1.c\n\n");
    // type here.

    struct student s1;
    s1.num = 11;
    s1.grade = 4.5;

    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1f\n", s1.grade);


	system("pause");
	return EXIT_SUCCESS;
}