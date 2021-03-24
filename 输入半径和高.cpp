
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PI 3.1415926 
#include<math.h> 
int main() 
{
	float r, h, s, t;
	printf("请输入半径和高\n");
	scanf("%f%f", &r &h);
	s = 2 * PI * pow(r, 2)  + PI * pow(r, 2) + 2 * r * h;
	t = PI * h * pow(r, 2) + 2 / 3 * PI * pow(r, 3);
	printf("其表面及为s=%f,体积为t=%f\n", s, t);
	return 0;
}