#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main12()
{
	char arr1[] = "hello_";
	char arr2[] = "world";
	char arr_buf[100];//全部初始化为'\0'
	int i = 0;
	for (; arr1[i] != '\0'; i++)
	{
		arr_buf[i] = arr1[i];
	}
	int j = 0;
	for (; arr2[j] != '\0'; j++)
	{
		arr_buf[i + j] = arr2[j];
	}
	arr_buf[i + j] = '\0';
	printf("%s%s\n", arr1, arr2);
	printf("%s\n", arr_buf);
	printf("%d\t%d", i, j);
	return 0;
}