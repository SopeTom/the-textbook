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
	printf("%lf �ĽǶ�����ʽΪ %d�� %d�� %d��",rad, iarg / 3600, (iarg % 3600) / 60, iarg % 60);
}

int main()
{
	double input = 0.0;
	printf("********************************\n");
	printf("********* ������ת���� *********\n");
	printf("********************************\n\n");
	printf("��������Ҫת���Ļ����ƣ������ʽ��x.x��>:");
	scanf("%lf", &input);
	angle(input);
	return 0;
}