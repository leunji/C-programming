/*programing03 �α��νÿ� ���̵� �˻��ϴ� �Լ� 
2019.09.15 ������*/
#include <stdio.h>
static int count = 0;
int check()
{
	int password;

	printf("��й�ȣ: ");
	scanf_s("%d", &password);
	if (password == 1234)
	{
		printf("�α��� ����!!\n");
		count = 0;   // ��й�ȣ �Է½��� ī���� Ŭ���� 
		return 1;
	}

	if (++count > 2)      // 3ȸ �̻� �����ϸ� �޽��� ǥ�� 
		printf("�α��� �õ�Ƚ�� �ʰ�\n");

	return 0;
}

int main(void)
{
	while (1)
	{
		if (check() == 1)
			break;   // �н����尡 ��ġ�ϸ� while �ݺ����� �����մϴ�. 
		if (count > 2)
			break;
	}

	return 0;
}