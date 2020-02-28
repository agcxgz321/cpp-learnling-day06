#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main07()
{
	int arr[10][5];

	printf("数组大小：%d\n", sizeof(arr));//求整个数组的大小；
	printf("二维数组中一行大小：%d\n", sizeof(arr[0]));//求一行数组的大小；
	printf("行数：%d\n", sizeof(arr) / sizeof(arr[0]));//求数组有几行
	printf("列数：%d\n", sizeof(arr[0]) / sizeof(int));

	srand((signed int)time(NULL));//随机数种子

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			/*scanf("%d", &arr[i][j]);*/
			arr[i][j] = rand() % 1000;//随机数
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("%d\t", arr[i][j]);

		}
		printf("\n");
	}
	//二维数组的内存模型
	printf("二维数组的内存首地址:%p\n", arr);
	printf("二维数组的内存第一行地址：%p\n", arr[0]);
	printf("二维数组的内存第二行地址：%p\n", arr[1]);
	

	printf("所有地址为：\n");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf("%p\t", &arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}