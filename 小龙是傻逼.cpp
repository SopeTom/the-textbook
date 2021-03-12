#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "郄小龙";
	char arr2[10];
	int u = 0;
again:

	printf("******欢迎使用傻逼检测器******\n输入名字即可判断其是否为傻逼\n请输入名字:>");
	scanf("%s", &arr2);
	if (strcmp(arr1, arr2) == 0)
	{
		printf("大傻逼\n");
	}
	else
	{
		printf("虽然我不认识这个人，但我知道郄小龙是傻逼\n");
	}
input:

	printf("******* 0.重复测试 ******* 1.退出程序 *******\n请输入:>");
	scanf("%d", &u);
	if (u == 0)
	{
		goto again;
	}
	if (u == 1)
	{
		printf("已退出程序，欢迎再次使用");
		Sleep(3000);
	}
	else
	{
		printf("指令错误，请重新输入\n");
		goto input;
	}
	return 0;

}