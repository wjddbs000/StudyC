/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���� ������ �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.11.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sub.h"

// �����Լ�
int main(void) 
{
	printf("���� 19-8.c\n\n");
    // type here.
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a, b);

    printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

	system("pause");
	return EXIT_SUCCESS;
}