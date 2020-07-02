/*programing03 로그인시에 아이디를 검사하는 함수 
2019.09.15 이은지*/
#include <stdio.h>
static int count = 0;
int check()
{
	int password;

	printf("비밀번호: ");
	scanf_s("%d", &password);
	if (password == 1234)
	{
		printf("로그인 성공!!\n");
		count = 0;   // 비밀번호 입력실패 카운터 클리어 
		return 1;
	}

	if (++count > 2)      // 3회 이상 실패하면 메시지 표시 
		printf("로그인 시도횟수 초과\n");

	return 0;
}

int main(void)
{
	while (1)
	{
		if (check() == 1)
			break;   // 패스워드가 일치하면 while 반복문을 종료합니다. 
		if (count > 2)
			break;
	}

	return 0;
}