/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,�Լ��� ������ ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add_five(int a);
void add_ten(int *pa);
// �����Լ�
int main(void) 
{
	printf("Hello World!\n\n");
    
    int a = 10;

    add_ten(&a);
    printf("a= %d\n", a);

    int res = add_five(a);
    printf("res = %d\n", res);
    
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

void add_ten(int *pa) {
    *pa += 10;
}
int add_five(int a) {
    return a + 5;
}