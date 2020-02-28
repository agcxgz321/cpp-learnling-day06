#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main14()
{
	const int red = 6, blue = 1;
	srand((unsigned int)time(NULL));
	int dou_ball[red];

	for (int k = 0; k < 100; k++)
	{
		for (int i = 0; i < red; i++)
		{
			dou_ball[i] = rand() % 33 + 1;
			//ШЅжи
			for (int j = 0; j < i; j++)
			{
				if (dou_ball[i] == dou_ball[j])
				{
					i--;
					break;
				}
			}
		}
		for (int i = 0; i < red; i++)
		{
			printf("%d\t", dou_ball[i]);
		}
		printf("+%d\t\n", rand() % 16 + 1);
	}

	return 0;
}