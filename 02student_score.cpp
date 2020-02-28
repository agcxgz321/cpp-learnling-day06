#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define len 5

int main02()
{
	int score[len];
	int sum = 0;
	int length = sizeof(score) / sizeof(int);
	printf("len=%d\nlength=%d\n", len, length);
	printf("请输入10个学生的成绩：\n");

	for (int i = 0; i < length; i++)
	{
		scanf("%d", &score[i]);
		//在通过键盘为数组赋值的时候，需要取地址符号【&】
		sum += score[i];

	}

	for (int i = 0; i < length; i++)
	{
		printf("第%d名学生成绩为：%d\n", i + 1, score[i]);

	}
	int avg;
	avg = sum / length;
	//求出数组的元素个数
	//sizeof(int);//4
	//sizeof(数组)；
	printf("数组长度：%d\n",sizeof(score));
	printf("数组元素大小：%d\n", sizeof(score[1]));

	printf("班级平均成绩为：%d", avg);

	return 0;
}