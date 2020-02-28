#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main08()
{
	const int ci = 10, cj = 10;
	int a[ci][cj] ;
	srand((int)time(NULL));
	int e = 0;

	for (int i = 0; i < ci; i++)
	{
		for (int j = 0; j < cj; j++)
		{
			a[i][j] = rand() % 100;
			printf("%d\t", a[i][j]);
			e += a[i][j];
		}
		printf("\n");

	}
	printf("总和为：%d\n", e);
	printf("平均数为：%d\n", e / (ci * cj));
	
	//a = rand() % 100;
	//printf("%d", a);

	return 0;
}
