/*programing01 ����,����,����,�������� �����ϴ� ���� ���α׷�
2019.09.15, ������*/
#include <stdio.h>

void sum(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main(void) {
	int num1, num2;
	char cal;
	
	while (1) {
		printf("������ �Է��Ͻÿ�:");
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
			printf("����+,����-,����*,������/\n");
			continue;
		}

	}
}

void sum(int a, int b) {
	static int sum_count = 0;
	sum_count++;
	printf("������ ��%d�� ����Ǿ����ϴ�.\n", sum_count);
	printf("������: %d\n", a + b);
}

void sub(int a, int b) {
	static int sub_count = 0;
	sub_count++;
	printf("������ ��%d�� ����Ǿ����ϴ�.\n", sub_count);
	printf("������:%d\n", a - b);
}

void mul(int a, int b) {
	static int mul_count = 0;
	mul_count++;
	printf("������ ��%d�� ����Ǿ����ϴ�.\n", mul_count);
	printf("������:%d \n", a * b);
}

void div(int a, int b) {
	static int div_count = 0;
	div_count++;
	printf("�������� ��%d�� ����Ǿ����ϴ�.\n", div_count);
	printf("������:%d\n", a / b);
}



