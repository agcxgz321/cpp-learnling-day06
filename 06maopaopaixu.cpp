#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//int array[] = { 4,10,3,5,1,2,9,8,6,7 };
	const int len = 10;
	int array[len];
	srand((unsigned int)time(NULL));
	for (int i = 0; i < len; i++)
	{
		array[i] = rand() % 11 + 1;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
				break;
			}
		}
	}

	//int len = sizeof(array) / sizeof(int);
	printf("³õÊ¼£º\t");
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				int tem;
				tem = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tem;
			}
			
		}
		printf("µÚ%d´Î£º\t", i+1);
		for (int j = 0; j < len; j++)
		{
			printf("%d\t",array[j]);
		}
		printf("\n");
	}
	
	return 0;
}