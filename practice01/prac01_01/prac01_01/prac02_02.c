/*programing01 µ¡¼À,»¬¼À,°ö¼À,³ª´°¼ÀÀ» Áö¿øÇÏ´Â °è»ê±â ÇÁ·Î±×·¥
2019.09.15, ÀÌÀºÁö*/
#include <stdio.h>

void sum(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main(void) {
	int num1, num2;
	char cal;
	
	while (1) {
		printf("¿¬»êÀ» ÀÔ·ÂÇÏ½Ã¿À:");
		scanf("%d%c%d", &num1, &cal, &num2);

		if (cal == '+') {
			sum(num1, num2);
		}
		else if (cal == '-') {
			sub(num1, num2);
		}
		else if (cal == '*') {
			mul(num1, num2);
		}
		else if (cal == '/') {
			div(num1, num2);
		}
		else {
			printf("µ¡¼À+,»¬¼À-,°ö¼À*,³ª´°¼À/\n");
			continue;
		}

	}
}

void sum(int a, int b) {
	static int sum_count = 0;
	sum_count++;
	printf("µ¡¼ÀÀº ÃÑ%d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n", sum_count);
	printf("¿¬»ê°á°ú: %d\n", a + b);
}

void sub(int a, int b) {
	static int sub_count = 0;
	sub_count++;
	printf("»¬¼ÀÀº ÃÑ%d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n", sub_count);
	printf("¿¬»ê°á°ú:%d\n", a - b);
}

void mul(int a, int b) {
	static int mul_count = 0;
	mul_count++;
	printf("°ö¼ÀÀº ÃÑ%d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n", mul_count);
	printf("¿¬»ê°á°ú:%d \n", a * b);
}

void div(int a, int b) {
	static int div_count = 0;
	div_count++;
	printf("³ª´°¼ÀÀº ÃÑ%d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n", div_count);
	printf("¿¬»ê°á°ú:%d\n", a / b);
}



