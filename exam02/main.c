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
int deletestack = 0;
int index = 0;
typedef struct business_card {
    char name[10];
    char* phone_num[10];
    char* e_mail[10];
    int index;
}ID;
ID id[50] = { 0 };
ID input_business_card();
void show_all_cards();
ID search_business_card(int num);
ID edit_business_card();
void delete_business_card();
// �����Լ�
int main(void)
{
    printf("Hello World!\n\n");
    // type here.
    int meau_num = 0;
    int num;
    while (1) {
        printf("1�� �Է� \n2�� ����\n3�� ����\n4�� ��ü���\n5���˻�\n6�� ����\n\n");
        printf("�޴� �Է� : ");
        scanf("%d", &meau_num);

        switch (meau_num)
        {
        case 1:
            input_business_card();
            break;
        case 2:
            edit_business_card();
            break;
        case 3: 
            delete_business_card();
            break;
        case 4:
            show_all_cards();
            break;
        case 5:
            printf("\n");
            printf("���� ��ȣ : ");
            scanf("%d", &num);
            getchar();
            search_business_card(num);
            system("pause");
            break;
        case 6: exit(EXIT_SUCCESS);
        default:
            break;
        }
        printf("\n");
    }


    system("pause");
    return EXIT_SUCCESS;
}

ID input_business_card() {
    int i;
    i = index;
    id[i].index = i + 1 + deletestack;
    printf("\n");
    printf("�̸� �Է� :");
    scanf("%s", id[i].name);
    printf("��ȣ �Է� : ");
    scanf("%s", id[i].phone_num);
    printf("�̸��� �Է� : ");
    scanf("%s", id[i].e_mail);
    for (int j = 0; j < index; j++)
    {
        if (!(strcmp(id[j].name, id[i].name)) 
            && !(strcmp(id[j].phone_num,id[i].phone_num))) {
            return;
        }
    }
    index++;
    return id[i];
}


void show_all_cards() {
    int i;
    for (i = 0; i < index; i++)
    {
        printf("\n");
        printf("���� ��ȣ : %d\n", id[i].index);
        printf("�̸� : %s\n", id[i].name);
        printf("��ȣ : %s\n", id[i].phone_num);
        printf("�̸��� : %s\n", id[i].e_mail);

    }
}
ID search_business_card(int num) {
    for (int i = 0; i < index; i++)
    {
        if (id[i].index == num) {

            printf("\n");
            printf("���� ��ȣ : %d\n", id[i].index);
            printf("�̸� : %s\n", id[i].name);
            printf("��ȣ : %s\n", id[i].phone_num);
            printf("�̸��� : %s\n", id[i].e_mail);
            return id[i];
        }
    }

}

ID edit_business_card() {
    int num;
    char newphone[10];
    char newemail[10];
    printf("������ ���Թ�ȣ : ");
    scanf("%d", &num);
    for (int i = 0; i < index; i++)
    {
        if (id[i].index == num) {
            printf("���� ��ȣ : %d\n", id[i].index);
            printf("�̸� : %s\n", id[i].name);
            printf("��ȣ : %s\n", id[i].phone_num);
            printf("�̸��� : %s\n", id[i].e_mail);
            printf("\n");
            printf("�� ��ȣ �Է�:");
            scanf("%s", newphone);
            printf("�̸��� �Է�:");
            scanf("%s", newemail);
            strcpy(id[i].phone_num, newphone);
            strcpy(id[i].e_mail, newemail);
            return id[i];
        }
    }

}
void delete_business_card() {
    show_all_cards();
    int num;

    printf("������ ���� ��ȣ : ");
    scanf("%d", &num);
    for (int i = 0; i < index; i++)
    {
        if (id[i].index == num) {

            for (int j = i; j < index-i; j++)
            {
                id[j] = id[j + 1];
            }
            
        }
    }
    deletestack++;
    index--;
}