/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, 11�� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.04.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
	//printf("Hello World!\n");

 //   char small, cap = 'H';
 //   if ((cap>='A')&&(cap<='Z'))
 //   {
 //       small = cap + ('a' - 'A');
 //   }
 //   printf("�빮�� : %c %c", cap, '\n');
 //   printf("�ҹ��� : %c\n", small);

    //char ch1, ch2;
    //scanf("%c%c", &ch1, &ch2);
    //printf("[%c %c]\n", ch1, ch2);

    char ch;
        
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c",ch);
    }
    putchar('\n');
	system("pause");
	return EXIT_SUCCESS;
}