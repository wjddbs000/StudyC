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
	printf("Hello World!\n\n");
    // type here.
    int a=0,b=0;
    while (1) {
        if (a % 3 == 0) {
            b +=a;
        }
        a++;
        if (a == 10) { break; }
    }
    printf("�� : %d \n", b);
	system("pause");
	return EXIT_SUCCESS;
}