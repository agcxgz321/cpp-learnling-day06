#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main05()
{
	int array[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	int i = 0, j = len - 1, tem;

	for (; i < j; i++, j--)
	{
		tem = array[i];
		array[i] = array[j];
		array[j] = tem;

	}
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	return 0;
}