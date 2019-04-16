/*태양빛도달시간계산프로그램
2019.04.16 이은지*/

#include<stdio.h>
int main(void)
{
	double light_speed = 300000;      //빛의속도를저장하는변수(300000km/sec)
	double distance = 149600000;      //태양과지구사이거리를저장하는변수
	//149600000km로초기화한다.
	double time;                      //시간을나타내는변수
	time = distance / light_speed;    //거리를빛의속도로나눈다.

	printf("빛의속도는%fkm/s \n", light_speed);
	printf("태양과지구와의거리%fkm \n", distance);
	printf("도달시간은%f초\n", time);   //시간을출력한다.
	return 0;
}