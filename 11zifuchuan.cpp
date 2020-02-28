#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main11()
{
	//char arr[] = {'H','e','l','l','o'};
	//char arr[] = "hello wold\n";
	char arr[100];
	//scanf("%[^\n]", arr);
	scanf("%[^1-9]", arr);

	printf("%s\n", arr);

	//printf("%s", arr);//只写数组名。%p和%s均是要输入地址的。
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%c", arr[i]);
	//}
	printf("%d\n", sizeof(arr));
	system("pause");
	return 0;
}