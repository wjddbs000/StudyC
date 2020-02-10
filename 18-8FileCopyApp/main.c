/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 파일 복사 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
	printf("예제 18-8.c\n\n");
    // type here.

    FILE* ifp,* ofp;
    char str[80];
    char* res;
    ifp = fopen("aa.txt", "r");
    if (ifp == NULL) {
        printf("파일 오픈 실패\n");
        return EXIT_FAILURE;
    }
    ofp = fopen("bb.txt", "w");

    if (ofp == NULL) {
        printf("출력파일을 열지 못했습니다.\n");
        return EXIT_FAILURE;
    }

    while (1) {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL) { break; }
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs(" ", ofp);
     
    }
    //printf("예제 18-9.c\n\n");

    //  FILE* ifp, * ofp;
    //char name[20];
    //int kor, eng, math;
    //int total;
    //double avg;
    //int res;

    //ifp = fopen("aaa.txt", "r");
    //if (ifp == NULL) {
    //    printf("입력 파일을 열지 못했습니다.\n");
    //    return 1;
    //}
    //
    //ofp = fopen("bbb.txt", "w");
    //if (ofp == NULL) {
    //    printf("출력파일을 열지 못했습니다.\n");
    //    return 1;
    //}


    //while (1) {
    //    res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
    //    if(res ==EOF)
    //    {
    //        break;
    //    }
    //    total = kor + eng + math;
    //    avg = total / 3.0;
    //    fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    //}
    //fclose(ofp);
    //fclose(ifp);

	system("pause");
	return EXIT_SUCCESS;
}
