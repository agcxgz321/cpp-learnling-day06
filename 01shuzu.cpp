#include<stdio.h>

int main01()
{
	int scores[10];//定义10个int类型的变量
	for (int i = 0; i < 10; i++)
	{
		scores[i] = 100 - i;
		printf("\t%d", scores[i]);

	}
	for(int i=0;i<10;i++)//局部变量，生命域在循环内，可以不会相互影响

	return 0;
}