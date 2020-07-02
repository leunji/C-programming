#include<stdio.h>
void print_binary(int x);

int main(void)
{
	print_binary(9);
	printf("\n");
	return 0;
}

void print_binary(int x)
{
	if (x > 0)
	{
		print_binary(x / 2);
		printf("%d", x % 2);
	}
}