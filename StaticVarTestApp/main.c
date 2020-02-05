/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���� ���� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void auto_func(void);
void static_func(void);

// �����Լ�
int main(void) 
{
	printf("Hello World!\n\n");

    printf("�Ϲ� ��������(auto)�� ����� �Լ�...\n");

    for (int i = 0; i < 3; i++)
    {
        auto_func();
    }
    printf("���� ��������(static)�� ����� �Լ�...\n");

    for (int i = 0; i < 3; i++)
    {
        static_func();
    }

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}
void auto_func(void) {
    auto int a = 0;
    a++;
    printf("a:%d\n", a);
}

void static_func(void) {
    static int a = 0;
    a++;
    printf("a:%d\n", a);
}