/*�¾�����޽ð�������α׷�
2019.04.16 ������*/

#include<stdio.h>
int main(void)
{
	double light_speed = 300000;      //���Ǽӵ��������ϴº���(300000km/sec)
	double distance = 149600000;      //�¾���������̰Ÿ��������ϴº���
	//149600000km���ʱ�ȭ�Ѵ�.
	double time;                      //�ð�����Ÿ���º���
	time = distance / light_speed;    //�Ÿ������Ǽӵ��γ�����.

	printf("���Ǽӵ���%fkm/s \n", light_speed);
	printf("�¾���������ǰŸ�%fkm \n", distance);
	printf("���޽ð���%f��\n", time);   //�ð�������Ѵ�.
	return 0;
}