#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define len 5

int main02()
{
	int score[len];
	int sum = 0;
	int length = sizeof(score) / sizeof(int);
	printf("len=%d\nlength=%d\n", len, length);
	printf("������10��ѧ���ĳɼ���\n");

	for (int i = 0; i < length; i++)
	{
		scanf("%d", &score[i]);
		//��ͨ������Ϊ���鸳ֵ��ʱ����Ҫȡ��ַ���š�&��
		sum += score[i];

	}

	for (int i = 0; i < length; i++)
	{
		printf("��%d��ѧ���ɼ�Ϊ��%d\n", i + 1, score[i]);

	}
	int avg;
	avg = sum / length;
	//��������Ԫ�ظ���
	//sizeof(int);//4
	//sizeof(����)��
	printf("���鳤�ȣ�%d\n",sizeof(score));
	printf("����Ԫ�ش�С��%d\n", sizeof(score[1]));

	printf("�༶ƽ���ɼ�Ϊ��%d", avg);

	return 0;
}