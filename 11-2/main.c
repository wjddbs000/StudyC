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

// �����Լ�
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

    printf("�й� �Է� : ");
    scanf("%d", &num);
    getchar();
    printf("���� �Է� : ");
    grade = getchar();
    printf("�й� : %d ���� : %c\n", num, grade);
    


	system("pause");
	return EXIT_SUCCESS;
}