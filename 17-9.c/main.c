/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����ü ���� ����Ʈ
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
    int num;
    struct list* next;
};

// �����Լ�
int main(void) 
{
	printf("����17-9.c\n\n");
    // type here.

    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list* head = &a, * current;
        
    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("list all : ");
    current = head;
    while (current != NULL) {
        printf("%d  ", current->num);
        current = current->next;
    }
    printf("\n");

    //printf("B���� : ");

    //a.next = &c;
    //b.next = 0;
    //current = head;
    //while (current != NULL) {
    //    printf("%d  ", current->num);
    //    current = current->next;
    //}
    //printf("\n");
        
	system("pause");
	return EXIT_SUCCESS;
}