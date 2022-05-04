#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <limits.h>
#include <Windows.h>

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

//int main()
//{
//	////1.对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////万一malloc失败了，p就被赋值为NULL
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////2.对动态开辟的空间越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	////
//	//free(p);
//	//p = NULL;
//
//	////3.对非动态开辟内存的free
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//	////4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*p++ = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	////5.对同一块动态内存多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	////p = NULL;
//	////......
//	//free(p);
//
//	////6.对动态开辟内存忘记释放（内存泄露）
//	//while (1)
//	//{
//	//	malloc(1);
//	//	Sleep(1000);
//	//}
//
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////1.运行代码程序会出现崩溃的现象
////2.程序存在内存泄露的问题
////str以值的形式给p，p是GetMemory函数的形参，只能函数内部有效。
////等GetMemory函数返回之后，动态开辟内存尚未释放并且无法找到，所有会内存泄露
//
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

////返回栈空间的地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//函数内部局部变量，出函数时P的值就被销毁
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int* test()
//{
//	//int a = 10;//栈区 - error
//	static int a = 10;//静态区
//	return &a;
//}
//
//int* test2()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//int main()
//{
//	Test();
//	test();
//	int* a = test2();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//未释放动态内存开辟的空间，会出现内存泄露。
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL;
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	//非法访问内存
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

////struct S
////{
////	int n;
////	int arr[];//未知大小
////};
//
//struct S
//{
//	int n;
//	int arr[0];//未知大小 - 柔性数组成员 - 数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}