/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    FILE* fp = NULL;
    char buffer[100];
    if ((fp = fopen("D://decment//hello.txt", "r")) == NULL)
    {
        printf("");
    }
    
    system("pause");
	return EXIT_SUCCESS;
}