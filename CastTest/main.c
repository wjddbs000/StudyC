#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	//int a = 20, b = 3;
	//double res;
	//
	//res = (double)a / (double)b;
	//printf("res = %.1f\n", res);

	//a = res;

	//printf("(int) %.1lf 결과 = %d\n",res, a);

	//short sh;
	//int in = 2147483647;
	//sh = (short)in;
	//printf("%d,%d\n", sh, in);

	int a = 10;
	double b = 3.14;
	long double ld = 345;
	printf("int형 변수의 크기 = %d\n", sizeof(a));
	printf("double형 변수의 크기 = %d\n", sizeof(b));
	printf("정수형 변수의 크기 = %d\n", sizeof(10));
	printf("수식 결과 크기 = %d\n", sizeof(3.14+1.56));
	printf("char 자료형의 크기 = %d\n", sizeof(char));
	printf("long double 자료형 크기 = %d\n", sizeof(ld));

	system("pause");
	return 0;

}