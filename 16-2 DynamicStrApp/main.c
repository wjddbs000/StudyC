/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���ڿ� ���� �Ҵ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_str(char** ps);
// �����Լ�
int main(void) 
{
	//printf("���� 16-4 \n\n");
 //   // type here.
 //   
 //   char temp[80];
 //   char* str[3];

 //   for (int i = 0; i < 3; i++)
 //   {
 //       printf("���ڿ� �Է� : ");
 //       gets(temp);
 //       str[i] = (char*)malloc(strlen(temp) + 1);
 //       strcpy(str[i], temp);
 //   }
 //   for (int i = 0; i < 3; i++)
 //   {
 //       printf("%s\n", str[i]);
 //   }
 //   for (int i = 0; i < 3; i++)
 //   {
 //       free(str[i]);
 //   }

    printf("���� 16-5 \n\n");
    // type here.

    char temp[80];
    char* str[21] = { 0 };
    int i = 0;

    while (1) {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp);
        if(strcmp(temp,"end")==0) break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }
    print_str(str);
    for (i = 0; str[i] !=NULL; i++)
    {
        free(str[i]);
    }
	system("pause");
	return EXIT_SUCCESS;
}



void print_str(char** ps) {
    while (*ps != NULL) {
        printf("%s\n", *ps);
        ps++;
    }
}