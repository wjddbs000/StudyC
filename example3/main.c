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
struct student_t {
    char name[10];
    int kor;
    int math;
    int eng;
};
void sumkor(struct student_t*);
void summath(struct student_t*);
void sumeng(struct student_t*);
// �����Լ�
int main(void) 
{
	printf("Hello World!\n\n");
    // type here.
    struct student_t st[3];

    for (int i = 0; i < 3; i++)
    {
        printf("�������� : ");
        scanf(" %d", &st[i].kor);

        printf("�������� : ");
        scanf(" %d", &st[i].math);

        printf("�������� : ");
        scanf(" %d", &st[i].eng);
        printf("\n");
    }
    sumkor(st);
    summath(st);
    sumeng(st);

	system("pause");
	return EXIT_SUCCESS;
}
void sumkor(struct student_t* a) {
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += (a+i)->kor;
    }
    printf("���� : %d %.1lf\n", sum,sum/3.0);

}
void summath(struct student_t* a) {
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += a[i].math;
    }
    printf("���� : %d %.1lf\n", sum, sum / 3.0);

}
void sumeng(struct student_t* a) {
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += a[i].eng;
    }
    printf("���� : %d %.1lf\n", sum, sum / 3.0);

}