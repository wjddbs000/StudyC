/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����ü �迭�� �ʱ�ȭ�ϰ� ���
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};
// �����Լ�
int main(void) 
{
	printf("���� 17-7.c\n\n");
    // type here.
    struct address list[5] = {
        {"ȫ�浿",23,"111-1111","�︪�� ����"},
    {"�̼���",35,"222-2222","���� ��õ��"},
    {"�庸��",19,"333-3333","�ϵ� û����"},
    {"������",15,"444-4444","�泲 õ��"},
    {"���߱�",45,"555-5555","Ȳ�ص� ����"}
    };
    int i;
    
    for ( i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    }
	system("pause");
	return EXIT_SUCCESS;
}