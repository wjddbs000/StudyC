/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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
    handle = _findfirst("D:\\document\\*.txt", &fd);  //���� ���� �� ��� ������ ã�´�.
    
  
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
        

        FILE* fp = fopen(a, "r");    // hello.txt ������ �б� ���� ����.  
                                           // ���� �����͸� ��ȯ

        fgets(buffer, sizeof(buffer), fp);    // hello.txt���� ���ڿ��� ����
        
        printf("File: %s\n", fd.name);
        printf("%s\n", buffer);    // Hello, world!: ������ ���� ���
        fclose(fp);
        result = _findnext(handle, &fd);
        
    }
 
    _findclose(handle);
    return;
}