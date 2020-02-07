/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 ,포인터 배열선언과 사용
  --------------------------------------------------------------------------------
  first created - 2020.02.06.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
	/*printf("예제14-6\n\n");
    
    char* animal[4];
    animal[0] = "elephant";
    animal[1] = "tiger";
    animal[2] = "cat";
    animal[3] = "dog";


    printf("%s", animal);
    for (int i = 0; i < 4; i++)
    {

        printf("%s\n", animal[i]);

    }*/
    printf("예제14-7\n\n");
    int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 5,6,7,8 };
    int ary3[4] = { 7,10,11,12 };

    int* pary[3] = { ary1,ary2,ary3 };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }

    system("pause");
	return EXIT_SUCCESS;
}