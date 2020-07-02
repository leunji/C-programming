#include <stdio.h>

int main(void)
{
	double x, a;

	printf("정수를 입력하시오:");
	scanf("%lf", &x);

	a = x * x;

	printf("주어진 정수 %lf의 제곱은 %lf입니다.", x, a);

	return 0;

}