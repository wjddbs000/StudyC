#include <stdio.h>

int global = 10;

void globalTest() {
	global += 5;
	printf("�Լ����� ���� ���� : %d\n", global);

}

int main() {
	int result = 10;
	printf("�������� : %d\n", global);
	printf("�������� : %d\n", result);

	globalTest();

	return 0;
}