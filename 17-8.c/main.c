#include <stdio.h>

int global = 10;

void globalTest() {
	global += 5;
	printf("함수에서 전역 변수 : %d\n", global);

}

int main() {
	int result = 10;
	printf("전역변수 : %d\n", global);
	printf("지역변수 : %d\n", result);

	globalTest();

	return 0;
}