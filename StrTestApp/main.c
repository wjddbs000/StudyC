/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���ڿ� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
	printf("Hello World!\n");
    //char fruit[80] = "apple";
    //printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
    //printf("apple�� �� ��° ������ �ּ� �� : %p\n", "apple" + 1);
    //printf("apple�� ù ��° ���� : %c\n", *"apple");
    //printf("apple�� �� ��° ���� : %c\n", *("apple" + 1));
    //
    //printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

    //printf("fruit�� ���� �ּ� %p\n", fruit);
    
    //int* desert = "apple";
    //
    //printf("������ �Ľ��� %s �Դϴ�.\n",desert);
    //desert = "banana";
    //printf("������ �Ľ��� %s �Դϴ�.\n", desert);

    /*char str[80];

    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    printf("ù��° �ܾ� : %s\n", str);
    scanf("%s", str);
    printf("���ۿ� ���� �ܾ� : %s\n", str);*/

    /*char str[80];
    printf("�������� ���ڿ� �Է� : ");
    gets(str);
    printf("���ڿ��� : %s \n", str);*/

    //char str[80];

    //printf("�������� ���ڿ� �Է� : ");
    //fgets(str, sizeof(str), stdin);

    //printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);

    //int age;
    //char name[20];

    //printf("���� �Է� : ");
    //scanf("%d", &age);
    //getchar();
    //printf("�̸� �Է� : ");
    //gets(name);
    //printf("���� : %d, �̸� : %s\n", age, name);

    char str[80] = "apple jam";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("jam");


	system("pause");
	return EXIT_SUCCESS;
}