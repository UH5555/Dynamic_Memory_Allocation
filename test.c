#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <limits.h>

//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	struct S arr[50];//存放50个struct S类型的数据
//	int n = 0;
//	scanf("%d", &n);
//	//int arr[n];//变长数组不可，
//
//	return 0;
//}

int main()
{
	//向内存申请10个整形空间
	int *p = (int*)malloc(LLONG_MAX);
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	return 0;
}