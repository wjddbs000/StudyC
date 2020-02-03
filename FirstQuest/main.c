/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/
#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <string.h>


void main()
{
    char buffer[100];
    struct _finddata_t fd;
    long handle;
    int result = 1;
    handle = _findfirst("D:\\document\\*.txt", &fd);  //현재 폴더 내 모든 파일을 찾는다.
    
  
    if (handle == -1)
    {
        printf("There were no files.\n");
        return;
    }
    
    while (result != -1)
    {
        char a[50] = "D:\\document\\";
        char* b = fd.name;
    
        strcat(a, b);
        

        FILE* fp = fopen(a, "r");    // hello.txt 파일을 읽기 모드로 열기.  
                                           // 파일 포인터를 반환

        fgets(buffer, sizeof(buffer), fp);    // hello.txt에서 문자열을 읽음
        
        printf("File: %s\n", fd.name);
        printf("%s\n", buffer);    // Hello, world!: 파일의 내용 출력
        fclose(fp);
        result = _findnext(handle, &fd);
        
    }
 
    _findclose(handle);
    return;
}