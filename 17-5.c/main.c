/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,����ü�� ��ȯ�Ͽ� �κ����� �� ��ȯ
  --------------------------------------------------------------------------------
  first created - 2020.02.07.
  writer - JeongYun Song.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vision {
    double left;
    double right;
};

struct vision exchange(struct vision robot);

// �����Լ�
int main(void) 
{
	printf("���� 17-5.c\n\n");
    // type here.
    struct vision robot;

    printf("�÷� �Է� : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    printf("ó�� �÷� : %.1lf %.1lf\n", robot.left, robot.right);




    printf("�ٲ� �÷� : %.1lf %.1lf\ns", exchange(robot).left, exchange(robot).right);


	system("pause");
	return EXIT_SUCCESS;
}

struct vision exchange(struct vision robot) {
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}
