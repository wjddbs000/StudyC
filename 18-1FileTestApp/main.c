/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� ,���� ���� �ޱ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void)
{
	//printf("���� 18-1.c\n\n");
 //   // type here.

 //   FILE* fp;

 //   fp = fopen("a.txt", "r");

 //   if (fp == NULL)
 //   {
 //       printf("���Ͽ��� ����");

 //       return EXIT_FAILURE;
 //   }

 //   printf("���Ͽ��� ����\n");
 //   fclose(fp);

	//printf("���� 18-2.c\n\n");
	//FILE* fp;
	//int ch;

	//fp = fopen("a.txt", "r");

	//if (fp == NULL)
	//{
	//	printf("���Ͽ��� ����");

	//	return EXIT_FAILURE;
	//}

	//while (1) {
	//	ch = fgetc(fp);
	//	if (ch == EOF)
	//	{
	//		break;
	//	}
	//	putchar(ch);
	//}
	//fclose(fp);
	//printf("\n");

	printf("���� 18-3.c\n\n");
	FILE* fp;
	char str[] = "banana";
	int i=0,ch;

	fp = fopen("b.txt", "w");

	if (fp == NULL)
	{
		printf("���ϻ��� ����");

		return EXIT_FAILURE;
	}

	while (str[i] != '\0') {
		fputc(str[i], fp);
			i++;
	}
	fputc('\n',fp);
	fclose(fp);
	printf("\n");

	//printf("���� 18-5.c\n\n");

	//int ch;

	//while (1) {
	//	ch = fgetc(stdin);
	//	if (ch == EOF) {
	//		break;
	//	}
	//	fputc(ch, stdout);
	//}

	//printf("���� 18-6.c\n\n");

	//FILE* fp;
	//
	//int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
	//int i, res;

	//fp = fopen("c.txt", "wb");
	//for ( i = 0; i < 10; i++)
	//{
	//	fputc(ary[i], fp);
	//}
	//fclose(fp);

	//fp = fopen("c.txt", "rt");
	//while (1) {
	//	res = fgetc(fp);
	//	if (res == EOF) break;
	//	printf("%4d", res);
	//}
	//printf("\n");
	//fclose(fp);


	printf("���� 18-7.c\n\n");

	FILE *fp;

	char str[20];

	fp = fopen("d.txt", "a+");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return EXIT_FAILURE;
	}

	while (1) {
		printf("���� �̸� : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) { break; }
		else if (strcmp(str, "list") == 0) {
			//����Ʈ ���
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str, sizeof(str), fp);
				if (feof(fp)) {
					break;
				}
				printf("%s", str);
			}

		}
		else {
			fprintf(fp, "%s\n", str);
		}
	}

	fclose(fp);
	system("pause");
	return EXIT_SUCCESS;
}