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
//	struct S arr[50];//���50��struct S���͵�����
//	int n = 0;
//	scanf("%d", &n);
//	//int arr[n];//�䳤���鲻�ɣ�
//
//	return 0;
//}

int main()
{
	//���ڴ�����10�����οռ�
	int *p = (int*)malloc(LLONG_MAX);
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
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