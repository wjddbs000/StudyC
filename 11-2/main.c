/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020...
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{

    /*int res;
    char ch;

    while (1) {
        res = scanf("%c", &ch);
        if (res == -1)
        {
            break;
        }
        printf("%d ", ch);
    }*/

    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();
    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d 학점 : %c\n", num, grade);
    


	system("pause");
	return EXIT_SUCCESS;
}