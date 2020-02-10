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
#include <string.h>

struct profile {
    char name[20];
    int age;
    double height;
    char* intro;
};

// 메인함수
int main(void) 
{
	printf("예제17-2.c\n\n");
    // type here.

    struct profile p1;
    
    strcpy(p1.name, "송정윤");
    p1.age = 21;
    p1.height = 212;
    p1.intro = (char*)malloc(80);

    printf("자기 소개 : ");
    gets(p1.intro);

    printf("이름 : %s\n",p1.name);
    printf("나이 : %d\n",p1.age);
    printf("키 : %.1f\n",p1.height);
    printf("자기소개 : %s\n",p1.intro);

    free(p1.intro);

    system("pause");
	return EXIT_SUCCESS;
}