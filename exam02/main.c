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
// 메인함수
int main(void)
{
    printf("Hello World!\n\n");
    // type here.
    int meau_num = 0;
    int num;
    while (1) {
        printf("1번 입력 \n2번 수정\n3번 삭제\n4번 전체출력\n5번검색\n6번 종료\n\n");
        printf("메뉴 입력 : ");
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
            printf("명함 번호 : ");
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
    printf("이름 입력 :");
    scanf("%s", id[i].name);
    printf("번호 입력 : ");
    scanf("%s", id[i].phone_num);
    printf("이메일 입력 : ");
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
        printf("명함 번호 : %d\n", id[i].index);
        printf("이름 : %s\n", id[i].name);
        printf("번호 : %s\n", id[i].phone_num);
        printf("이메일 : %s\n", id[i].e_mail);

    }
}
ID search_business_card(int num) {
    for (int i = 0; i < index; i++)
    {
        if (id[i].index == num) {

            printf("\n");
            printf("명함 번호 : %d\n", id[i].index);
            printf("이름 : %s\n", id[i].name);
            printf("번호 : %s\n", id[i].phone_num);
            printf("이메일 : %s\n", id[i].e_mail);
            return id[i];
        }
    }

}

ID edit_business_card() {
    int num;
    char newphone[10];
    char newemail[10];
    printf("수정할 명함번호 : ");
    scanf("%d", &num);
    for (int i = 0; i < index; i++)
    {
        if (id[i].index == num) {
            printf("명함 번호 : %d\n", id[i].index);
            printf("이름 : %s\n", id[i].name);
            printf("번호 : %s\n", id[i].phone_num);
            printf("이메일 : %s\n", id[i].e_mail);
            printf("\n");
            printf("폰 번호 입력:");
            scanf("%s", newphone);
            printf("이메일 입력:");
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

    printf("삭제할 명함 번호 : ");
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