/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����ü �������� ���
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
// �����Լ�
int main(void) 
{
	printf("���� 17-6.c\n\n");
    // type here.
    struct score yuni = { 90,80,70 };
    struct score *ps = &yuni;

    printf("���� %d\n", (*ps).kor);
    printf("���� %d\n", ps->eng);
    printf("���� %d\n", ps->math);

	system("pause");
	return EXIT_SUCCESS;
}