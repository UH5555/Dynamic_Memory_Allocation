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
//	struct S arr[50];//���50��struct S���͵�����
//	int n = 0;
//	scanf("%d", &n);
//	//int arr[n];//�䳤���鲻�ɣ�
//
//	return 0;
//}

//int main()
//{
//	//���ڴ�����10�����οռ�
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ��ʱ���ͷſռ䣬��������ϵͳ
//	free(p);//pָ��Ŀռ��ͷ��ˣ����ǻ���ָ��ԭ����λ��
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٿռ��
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
//	//����ʹ��malloc���ٵ�20���ֽڿռ�
//	//����������Ҫ40���ֽڿռ�
//	//����ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//reallocʹ��ʱ���ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ棬��ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ棬��relloc������������һ���µ��ڴ�����
//	//  ����һ������ռ�ĵ�ַ�����Ұ�ԭ���ڴ�����ݿ����������ͷžɵ��ڴ�ռ䡣
//	//  ��󷵻��¿����ڴ�ռ�ĵ�ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	//
//	int* p2=(int*) realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	////1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	////2.�Զ�̬���ٵĿռ�Խ�����
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
//	////3.�ԷǶ�̬�����ڴ��free
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//	////4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	////5.��ͬһ�鶯̬�ڴ����ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	////p = NULL;
//	////......
//	//free(p);
//
//	////6.�Զ�̬�����ڴ������ͷţ��ڴ�й¶��
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
////1.���д���������ֱ���������
////2.��������ڴ�й¶������
////str��ֵ����ʽ��p��p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч��
////��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������л��ڴ�й¶
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

////����ջ�ռ�ĵ�ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�����ڲ��ֲ�������������ʱP��ֵ�ͱ�����
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
//	//int a = 10;//ջ�� - error
//	static int a = 10;//��̬��
//	return &a;
//}
//
//int* test2()
//{
//	int* ptr = malloc(100);//����
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
//	//δ�ͷŶ�̬�ڴ濪�ٵĿռ䣬������ڴ�й¶��
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL;
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	//�Ƿ������ڴ�
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
////	int arr[];//δ֪��С
////};
//
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С - ���������Ա - ����Ĵ�С�ǿ��Ե�����
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
//	//�ͷ�
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
	//������С
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
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}