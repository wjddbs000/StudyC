/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 유니
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student 
{
    int num;
    double grade;
};

// 메인함수
int main(void) 
{
	printf("예제 17-10.c\n\n");
    // type here.
    
    union student s1 = { 315 };
    printf("학번 %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점 %.1lf\n", s1.grade);
    printf("학번 %d\n", s1.num);

	system("pause");
	return EXIT_SUCCESS;
}