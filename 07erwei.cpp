#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main07()
{
	int arr[10][5];

	printf("�����С��%d\n", sizeof(arr));//����������Ĵ�С��
	printf("��ά������һ�д�С��%d\n", sizeof(arr[0]));//��һ������Ĵ�С��
	printf("������%d\n", sizeof(arr) / sizeof(arr[0]));//�������м���
	printf("������%d\n", sizeof(arr[0]) / sizeof(int));

	srand((signed int)time(NULL));//���������

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			/*scanf("%d", &arr[i][j]);*/
			arr[i][j] = rand() % 1000;//�����
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
	//��ά������ڴ�ģ��
	printf("��ά������ڴ��׵�ַ:%p\n", arr);
	printf("��ά������ڴ��һ�е�ַ��%p\n", arr[0]);
	printf("��ά������ڴ�ڶ��е�ַ��%p\n", arr[1]);
	

	printf("���е�ַΪ��\n");
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