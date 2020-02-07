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

// �����Լ�
int main(int argc,char **argv) 
{
    printf("���� 16-6.c \n\n");

    if (argc <= 1) {
        printf("��� ������ �ùٸ��� �׽��ϴ�.\n");
        exit(1);
    }
    char* intarg[2];
    int j=0;
    for ( int i = 0; i < argc; i++)
    {
        if (i == 0) { continue; }
        intarg[j] = (char*)malloc(strlen(argv[i]) + 1);
        strcpy(intarg[j], argv[i]);
        j++;
    }

    printf("ù��° ����μ� %s\n", intarg[0]);
    printf("�ι�° ����μ� %s\n", intarg[1]);

    for (int i = 0; i < 2; i++)
    {
        free(intarg[i]);
    }

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}