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
#include"line.h"
#include"point.h"

// 메인함수
int main(void) 
{
	printf("예제 19-10.c\n\n");
    // type here.
    Line a = { {1,2},{5,6} };
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("선의 가운데 점의 좌표 : (%d,%d)\n", b.x, b.y);

	system("pause");
	return EXIT_SUCCESS;
}