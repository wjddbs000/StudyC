/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� ,���� ���� �ޱ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
	printf("���� 18-1.c\n\n");
    // type here.

    FILE* fp;

    fp = fopen("a.txt", "r");

    if (fp == NULL)
    {
        printf("���Ͽ��� ����");

        return EXIT_FAILURE;
    }

    printf("���Ͽ��� ����\n");
    fclose(fp);


    system("pause");
	return EXIT_SUCCESS;
}