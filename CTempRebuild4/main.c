/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Song.
*/

#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <string.h>
#include<windows.h>
void getnumber(long handle)
{
    printf("hello");
}

void main()
{
    char buffer[100];    
    long handle;
    int last;

    while (1)
    {

        if (_kbhit())
        {
            if (getch() == 'x')
            {
                break;
            }
        }
        
        struct _finddata_t fd;
        int result = 1;
        handle = _findfirst("D:\\document\\*.txt", &fd);
        printf("File List\n");
        while (result != -1)
        {
            char a[50] = "D:\\document\\";
            char* b = fd.name;

            strcat(a, b);


            FILE* fp = fopen(a, "r");   
            fgets(buffer, sizeof(buffer), fp);    

            printf("Filename: %s\n", fd.name);
            
            fclose(fp);
            result = _findnext(handle, &fd);
            
        }
        printf("문서 내용\n%s\n", buffer);
        _findclose(handle);       
        Sleep(100);
        system("cls");
    }

    return 0;
}