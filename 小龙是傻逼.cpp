#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "ۧС��";
	char arr2[10];
	int u = 0;
again:

	printf("******��ӭʹ��ɵ�Ƽ����******\n�������ּ����ж����Ƿ�Ϊɵ��\n����������:>");
	scanf("%s", &arr2);
	if (strcmp(arr1, arr2) == 0)
	{
		printf("��ɵ��\n");
	}
	else
	{
		printf("��Ȼ�Ҳ���ʶ����ˣ�����֪��ۧС����ɵ��\n");
	}
input:

	printf("******* 0.�ظ����� ******* 1.�˳����� *******\n������:>");
	scanf("%d", &u);
	if (u == 0)
	{
		goto again;
	}
	if (u == 1)
	{
		printf("���˳����򣬻�ӭ�ٴ�ʹ��");
		Sleep(3000);
	}
	else
	{
		printf("ָ���������������\n");
		goto input;
	}
	return 0;

}