#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
void angle(double rad)
{
	int iarg = 0;
	iarg = (int)(180.0 / PI * rad * 36000);
	if (iarg % 10 >= 5)
		iarg = (iarg + 10) / 10;
	else
		iarg / 10;
	printf("%lf 的角度制形式为 %d度 %d分 %d秒",rad, iarg / 3600, (iarg % 3600) / 60, iarg % 60);
}

int main()
{
	double input = 0.0;
	printf("********************************\n");
	printf("********* 弧度制转化器 *********\n");
	printf("********************************\n\n");
	printf("请输入需要转换的弧度制（输入格式：x.x）>:");
	scanf("%lf", &input);
	angle(input);
	return 0;
}