/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,��ó�� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"student.h"
// �����Լ�
int main(void) 
{
	//printf("���� 19-1.c\n\n");
 //   // type here.

 //   Student s1 = { 315,"ȫ�浿" };
 //   
 //   printf("�й� : %d, �̸� : %s\n", s1.num, s1.name);

    //printf("���� 19-2.c\n\n");
    //double radius, area;
    //printf("������ �Է�(100����) : ");
    //scanf("%lf", &radius);
    //if (radius > LIMIT) ERR_PRN;
    //
    //else {
    //    area = PI * radius * radius;
    //    printf("���� ���� : %.2lf (%s)\n", area, MSG);
    //}

    //printf("���� 19-3.c\n\n");

    //int a = 10, b = 20;
    //double x = 30, y = 40;
    //int res;

    //printf("a+b=%d\n", SUM(a, b));
    //printf("x+y=%lf\n", SUM(x, y));
    //res = 30 / MUL(2, 5);
    //printf("res : %d\n", res);
    //
    //printf("���� 19-5.c\n\n");
    //int a1, a2;
    //NAME_CAT(a, 1) = 10;
    //NAME_CAT(a, 2) = 20;
    //
    //PRINT_EXP(a1 + a2);
    //PRINT_EXP(a2 - a1);
    printf("���� 19-6.c\n\n");

    int max;

#if VER >= 6 
    printf("���� %d �Դϴ�.\n", VER);
#endif // VER >= 6 

#if BIT == 16
    max = 32767;
#else
    max = 2147483647;
#endif // BIT16

    printf("int�� ������ �ִ� : %d\n", max);
    system("pause");
	return EXIT_SUCCESS;
}