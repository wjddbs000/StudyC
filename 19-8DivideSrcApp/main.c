/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수,분할 컴파일 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.11.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sub.h"

// 메인함수
int main(void) 
{
	printf("예제 19-8.c\n\n");
    // type here.
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a, b);

    printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	system("pause");
	return EXIT_SUCCESS;
}