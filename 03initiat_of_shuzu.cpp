#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define len 10
#include<stdlib.h>

int main03()
{
	//�������ֵһ�� Ϊ�����Ԫ�ظ�ֵһ��
	//int scores[len] = { 99,98,97 };//{ 99,98,97,96,37,55,44,88,81,45 };
	//int scores[] = { 55,88,99,74 };
	//int scores[] = { 0 };
	//int scores[10] = { 1 };

	//printf("���鳤��%d\n", sizeof(scores) / sizeof(int));

	//for (int i = 0; i < len; i++)
	//{
	//	printf("%d\n", scores[i]);
	//}

	//������ڴ�ṹ
	int scores[len] = { 99,98,97,96,37,55,44,88,81,45 };
	for (int i = 0; i < len; i++)
	{
		printf("%p\t", scores);
		printf("%p\t", &scores[i]);
		printf("%X\n", &scores[i]);


	}


	system("pause");


	return 0;
}