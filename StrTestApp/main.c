/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,문자열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	printf("Hello World!\n");
    //char fruit[80] = "apple";
    //printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    //printf("apple의 두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    //printf("apple의 첫 번째 문자 : %c\n", *"apple");
    //printf("apple의 두 번째 문자 : %c\n", *("apple" + 1));
    //
    //printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

    //printf("fruit의 시작 주소 %p\n", fruit);
    
    //int* desert = "apple";
    //
    //printf("오늘의 후식은 %s 입니다.\n",desert);
    //desert = "banana";
    //printf("내일의 후식은 %s 입니다.\n", desert);

    /*char str[80];

    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("첫번째 단어 : %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남은 단어 : %s\n", str);*/

    /*char str[80];
    printf("공백포함 문자열 입력 : ");
    gets(str);
    printf("문자열은 : %s \n", str);*/

    //char str[80];

    //printf("공백포함 문자열 입력 : ");
    //fgets(str, sizeof(str), stdin);

    //printf("입력된 문자열은 %s입니다\n", str);

    //int age;
    //char name[20];

    //printf("나이 입력 : ");
    //scanf("%d", &age);
    //getchar();
    //printf("이름 입력 : ");
    //gets(name);
    //printf("나이 : %d, 이름 : %s\n", age, name);

    char str[80] = "apple jam";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("jam");


	system("pause");
	return EXIT_SUCCESS;
}