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

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};

// 메인함수
int main(void) 
{
	printf("예제17-3.c\n\n");
    // type here.

    struct student yuni;
    yuni.pf.age = 24;
    yuni.pf.height = 190;
    yuni.id = 100;
    yuni.grade = 4.5;


    printf("나이 : %d\n", yuni.pf.age);
    printf("키 : %.1f\n", yuni.pf.height);
    printf("아이디 : %d\n", yuni.id);
    printf("학점 : %.1f\n", yuni.grade);

	system("pause");
	return EXIT_SUCCESS;
}