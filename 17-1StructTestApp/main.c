/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����� ���� ������ structure �н�
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

// �����Լ�
int main(void) 
{
	printf("����17-1.c\n\n");
    // type here.

    struct student s1;
    s1.num = 11;
    s1.grade = 4.5;

    printf("�й� : %d\n", s1.num);
    printf("���� : %.1f\n", s1.grade);


	system("pause");
	return EXIT_SUCCESS;
}