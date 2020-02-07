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

void print_ary(int(*)[4]);
// 메인함수
int main(void) 
{
	//printf("예제 15-4 \n\n");
 //   // type here.
 //   int ary[5] = { 1,2,3,4,5 };
 //   printf("ary의 값 : %u\t",ary);
 //   printf("ary의 주소 : %u\n",&ary);
 //   printf("ary+1 : %u\t", ary + 1);
 //   printf("&ary+1 : %u\n", &ary + 1);

    printf("예제 15-6\n\n");

    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    print_ary(ary);

	system("pause");
	return EXIT_SUCCESS;
}

void print_ary(int(*pa)[4]){
    int i,j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}