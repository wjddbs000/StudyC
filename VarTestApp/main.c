/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���� ��뿵��
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void assign(void);

// �����Լ�
int main(void) 
{
	printf("Hello World!\n");

    auto int a = 10,b=20;
    printf("��ȯ�� %d, %d\n", a, b);
    {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("��ȯ�� %d, %d \n", a,b);
    
	system("pause");
	return EXIT_SUCCESS;
}


void assign(void) {
    int a;
    a = 10;

    printf("assign �Ա� a : %d\n", a);
    return;
}