
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PI 3.1415926 
#include<math.h> 
int main() 
{
	float r, h, s, t;
	printf("������뾶�͸�\n");
	scanf("%f%f", &r &h);
	s = 2 * PI * pow(r, 2)  + PI * pow(r, 2) + 2 * r * h;
	t = PI * h * pow(r, 2) + 2 / 3 * PI * pow(r, 3);
	printf("����漰Ϊs=%f,���Ϊt=%f\n", s, t);
	return 0;
}