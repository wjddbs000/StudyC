/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.06.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_ptr(char** ppa, char **ppb);

// �����Լ�
int main(void) 
{
	printf("���� 15-2\n\n");

    char* pa = "success";
    char* pb = "failure";

    printf("pa -> %s, pb ->%s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb ->%s\n", pa, pb);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

void swap_ptr(char** ppa, char **ppb) {
    char* temp;

    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}