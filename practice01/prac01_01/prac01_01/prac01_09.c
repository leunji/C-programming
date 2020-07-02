#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
	hanoi_tower(6, 'A', 'B', 'C');

}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}