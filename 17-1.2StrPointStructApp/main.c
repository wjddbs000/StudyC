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

struct profile {
    char name[20];
    int age;
    double height;
    char* intro;
};

// �����Լ�
int main(void) 
{
	printf("����17-2.c\n\n");
    // type here.

    struct profile p1;
    
    strcpy(p1.name, "������");
    p1.age = 21;
    p1.height = 212;
    p1.intro = (char*)malloc(80);

    printf("�ڱ� �Ұ� : ");
    gets(p1.intro);

    printf("�̸� : %s\n",p1.name);
    printf("���� : %d\n",p1.age);
    printf("Ű : %.1f\n",p1.height);
    printf("�ڱ�Ұ� : %s\n",p1.intro);

    free(p1.intro);

    system("pause");
	return EXIT_SUCCESS;
}