/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 11장 문자
  --------------------------------------------------------------------------------
  first created - 2020.02.04.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	//printf("Hello World!\n");

 //   char small, cap = 'H';
 //   if ((cap>='A')&&(cap<='Z'))
 //   {
 //       small = cap + ('a' - 'A');
 //   }
 //   printf("대문자 : %c %c", cap, '\n');
 //   printf("소문자 : %c\n", small);

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