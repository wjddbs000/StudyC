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

// �����Լ�
int main(void) 
{
    register int i;
    int sum = 0;

    for (int i = 0; i <= 10000; i++)
    {
        sum += i;
    }
	printf("sum is %d\n",sum);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}