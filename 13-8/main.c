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

int* sum(int a, int b);
// �����Լ�
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    int a = 10, b = 20;
    int* resp = sum(a, b);
    printf("�� = %d\n", *resp);


	system("pause");
	return EXIT_SUCCESS;
}

int* sum(int a, int b) {
    static int res;
    res = a + b;
    return &res;
}