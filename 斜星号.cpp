#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "***********";
	char arr2[] = "           ";
	char arr3[] = "           ";
	int left = 0;
	int i = 0;
	while (left < 7)
	{
		i = left;
		while (left <= (i + 4))
		{
			arr2[left] = arr1[left];
			left++;
		}
		printf("%s\n", arr2);
		left = i;
		while (left <= (i + 4))
		{
			arr2[left] = arr3[left];
			left++;
		}
		left = i;

		left = left + 2;

	}
}