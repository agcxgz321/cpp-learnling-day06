#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main10()
{
	const int row = 3,
		col = 4,
		num = 5;

	int arr[row][col][num] = {
		{{1,2,7,6,},{3,4,1},{3}},
	{{0}},
	{{14,23,45},{54,23}},
	};

	printf("最外层：\n");

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < num; k++)
			{
				printf("%d\t", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("第%d层大圈结束\n",i+1);
	}
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0][0]));
	printf("%d\n", sizeof(arr[0][0][0]));
	printf("%p\n", arr);
	printf("%p\n", arr[1]);
	printf("%p\n", arr[1][1]);
	printf("%p\n", &arr[0][0][0]);
	printf("%p\n", &arr[0][0][1]);

	return 0;
}