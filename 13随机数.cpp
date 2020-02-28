#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main13()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d\t",rand()%11+50);

		}
		printf("\n");
	}

	return 0;
}