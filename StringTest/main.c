#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {

	//char fruit[20] = "strawberry";
	//
	//printf("���� : %s\n", fruit);
	//printf("���� ´ : %s %s\n", fruit,"jam");
	//
	//strcpy(fruit, "water melon");
	//printf("�̹� ������ %s\n", fruit);

	//int age;
	//double height;

	//printf("���̿� Ű�� �Է��ϼ��� : ");
	//scanf("%d%lf", &age, &height);
	//printf("���� : %d, Ű : %.1lf\n", age, height);

	char grade;
	char name[20];
	
	printf("������ �Է��ϼ��� : ");
	scanf("%c", &grade);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);

	printf("%s�� ���� : %c\n", name, grade);

	system("pause");
	return 0;

}