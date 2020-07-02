#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);

}
int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("%d!은 %d입니다.\n", n, factorial(n));
	return 0;
}