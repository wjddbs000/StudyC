/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 , 구조체 초기화와 대입연산
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    double grade;
};
// 메인함수
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    struct student s1 = { 315,"홍길동",2.4 },
        s2 = { 316,"이순신",3.7 },
        s3 = { 318,"세종대왕",4.4 };

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;

    printf("학번 : %d\n", max.id);
    printf("이름 : %s\n", max.name);
    printf("학점 : %.1f\n", max.grade);


	system("pause");
	return EXIT_SUCCESS;
}