#include <stdio.h>
int inc(int counter);

int main(void)
{
	int i;

	i = 10;
	printf("�Լ� ȣ���� i=%d\n", i);
	inc(i);
	printf("�Լ� ȣ���� i=%d\n", i);
	return 0;
}
void inc(int counter)
{
	counter++;
}