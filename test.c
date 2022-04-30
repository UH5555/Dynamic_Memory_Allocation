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

//int main()
//{
//	//向内存申请10个整形空间
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时，释放空间，还个操作系统
//	free(p);//p指向的空间释放了，但是还是指着原来的位置
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int));
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//这里使用malloc开辟的20个字节空间
//	//假设这里需要40个字节空间
//	//可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用时候的注意事项
//	//1.如果p指向的空间之后有足够的内存，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存，则relloc函数会重新找一个新的内存区域
//	//  开辟一块满足空间的地址，并且把原来内存的数据拷贝回来，释放旧的内存空间。
//	//  最后返回新开辟内存空间的地址
//	//3.得用一个新的变量来接受realloc函数的返回值
//	//
//	int* p2=(int*) realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	////1.对NULL进行解引用操作
	//int* p = (int*)malloc(40);
	////万一malloc失败了，p就被赋值为NULL
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	////2.对动态开辟的空间越界访问
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	////
	//free(p);
	//p = NULL;

	////3.对非动态开辟内存的free
	//int a = 10;
	//int* p = &a;
	//*p = 20;
	//free(p);
	//p = NULL;

	return 0;
}