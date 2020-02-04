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
struct address {
    char add[20];
    int show;
        
};
void main()
{
    struct address list[5] = { 0, };
    char buffer[100];    
    long handle;
    int last;
    int ary[10];
    int i=0;
    int min = list[0].show;
    
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
            int j = 0;
            char a[50] = "D:\\document\\";
            char* b = fd.name;
            
            strcat(a, b);
            ary[j] = a;
            
            
            FILE* fp = fopen(a, "r");   
            fgets(list[j].add, sizeof(list[j].add), fp);    

            printf("Filename: %s\n", fd.name);
            j++;
            fclose(fp);
            result = _findnext(handle, &fd);
            list[j].show++;
        }
        
          
       
        for ( int i= 0; i < 10; i++) {

            if (list[i].show < min) {
                min = list[i].show;
             }
        }
        printf("문서 내용\n%s\n", list[i].add);
        _findclose(handle);       
        Sleep(100);
        system("cls");
    }

    return 0;
}