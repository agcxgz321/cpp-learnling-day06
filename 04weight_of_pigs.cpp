#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main04()
{
	const int len=9;
	int weights[len];
	//printf("please input weight of %d pigs:\n", len);
	for (int i = 0; i < len; i++)
	{
		printf("�������%dֻС������أ�", i + 1);
		scanf("%d", &weights[i]);
	}
	printf("\n");

	int max = 0, xiabiao = 1;
	for (int i = 0; i < len; i++)
	{
		if (weights[i] >= max)
		{
			max = weights[i];
			xiabiao = i;
		}
	}

	printf("��%dֻС������\n��%d\n", xiabiao + 1, max);


	return 0;
}