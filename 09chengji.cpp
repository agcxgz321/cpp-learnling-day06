#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main09()
{
	int chi, math, eng;
	const int row = 10, col = 3;
	int scores[row][col];
	srand((unsigned int)time(NULL));
	int aver[row] = { 0 };
	int chi_aver = 0, math_aver = 0, eng_aver = 0;

	for (int i = 0; i < row; i++)
	{
		//printf("�������%d��ѧ��������������ųɼ���\n",i+1);
		for (int j = 0; j < col; j++)
		{
			//scanf("%d", &scores[i][j]);
			scores[i][j] = rand() % 50+50;
			aver[i] += scores[i][j];
		}
		aver[i] /= col;
	}
	for (int i = 0; i < row; i++)
	{
		chi_aver += scores[i][0];
		math_aver += scores[i][1];
		eng_aver += scores[i][2];
	}
	chi_aver /= row;
	math_aver /= row;
	eng_aver /= row;

	for (int i = 0; i < row; i++)
	{
		printf("��%d��ѧ�����������ƽ���ɼ�Ϊ��\n", i + 1);
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", scores[i][j]);
		}
		printf("%d\n", aver[i]);
	}
	printf("�����������ƽ���ɼ�Ϊ��\n%d\t%d\t%d\n", chi_aver, math_aver, eng_aver);
	
	return 0;
}