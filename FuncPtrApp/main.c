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

int sum(int a, int b);


// �����Լ�
int main(void) 
{
	printf("���� 15-7!\n\n");

    int(*fp)(int, int);
    int res;

    fp = sum;
    res = fp(10, 20);
    printf("result : %d\n", res);

    system("pause");
	return EXIT_SUCCESS;
}


int sum(int a, int b) {
    int res = (a + b);
    return res;
}