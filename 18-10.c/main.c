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
int main(void) 
{
	/*printf("���� 18-10.c\n\n");

    FILE* fp;

    int age;
    char name[20];
    fp = fopen("a.txt", "r");

    if (fp == NULL) { return EXIT_FAILURE; }

    fscanf(fp, "%d", &age);
    while (fgetc(fp) != '\n') {
    }
    fgets(name, sizeof(name), fp);

    printf("�̸� : %s, ���� : %d", name, age);

    fclose(fp);*/

    printf("���� 18-11.c\n\n");

    FILE* afp, * bfp;
    int num = 2;
    int res;

    afp = fopen("a.txt","wt");
    if (afp == NULL) { return EXIT_FAILURE; }
    fprintf(afp, "%d", num);
    
    bfp = fopen("b.txt", "wb");
    if (bfp == NULL) { return EXIT_FAILURE; }
    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b.txt", "rb");
    fread(&res, sizeof(res), 1, bfp);
    printf("%d\n", res);

    fclose(bfp);
    
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}