/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020...
  writer - JeongYun Song.
*/

#include <stdio.h>

#include <string.h>

void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
// �����Լ�
int main(void) 
{
	printf("����15-8\n\n");
    // type here.

    int sel;

    printf("01 �� ������ ��\n");
    printf("02 �� ������ ��\n");
    printf("03 �� ���� �߿��� ū �� ���\n");
    printf("���ϴ� ������ �����ϼ��� : ");
    scanf("%d", &sel);

    switch (sel) {
    case 1:func(sum); break;
    case 2:func(mul); break;
    case 3:func(max); break;
    }


	system("pause");
	return 0;
}
void func(int(*fp)(int, int)) {
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("�ᱣ���� : %d\n", res);
}
int sum(int a, int b) {
    return(a + b);
}
int mul(int a, int b){
    return(a + b);
}
int max(int a, int b){
    return(a + b);
}