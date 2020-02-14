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

void insertNode(struct node*,double d);
void deleteNode(struct node*,int a);
void printNode();
typedef struct node
{
    double num;
    struct node* next;
}Node;
struct node* current;
// 메인함수
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    struct node a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct node *head = &a;


    current = head;
    insertNode(&head,30.1);
    printNode();
    printf("\n");

    deleteNode(&head, 2);

    printNode();
	system("pause");
	return EXIT_SUCCESS;
}
void printNode() {
    while (current != NULL) {
        printf("%.1lf\t", current->num);
        current = current->next;
    }
}
void insertNode(struct node** head,double d) {
    struct node *new = malloc(sizeof(struct node));
    struct node* Tail;
    new->num = d;
    new->next = NULL;
    Tail = *head;
    while (Tail->next != NULL) {
        Tail = Tail->next;
    }
    Tail->next = new;
    
}
void deleteNode(Node** head, int a) {
    Node *target;
    Node* before;
    target = *head;
    before = target;
    for (int i = 1; i < a; i++)
    {
        before = target;
        target = target->next;  
        
    }
    before->next = target->next;
    
}
