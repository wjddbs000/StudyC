/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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

// �����Լ�
int main(void) 
{
	printf("����17-3.c\n\n");
    // type here.

    struct student yuni;
    yuni.pf.age = 24;
    yuni.pf.height = 190;
    yuni.id = 100;
    yuni.grade = 4.5;


    printf("���� : %d\n", yuni.pf.age);
    printf("Ű : %.1f\n", yuni.pf.height);
    printf("���̵� : %d\n", yuni.id);
    printf("���� : %.1f\n", yuni.grade);

	system("pause");
	return EXIT_SUCCESS;
}