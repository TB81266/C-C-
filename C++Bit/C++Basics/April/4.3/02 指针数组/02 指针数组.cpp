#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main01()
{
	//����ָ��
	int a = 10;
	int* pa = &a;    //һ��ָ��
	int** ppa = &pa; //ppa���Ƕ���ָ��
	printf("%d\n", **ppa);
	**ppa = 200;
	//200
	printf("%d\n", **ppa);
	printf("%d\n", a);

	return 0;
}

//
//ָ������
int main()
{
	//int arr[10] = {0};//�������� - �����������
	//char ch[5] = { 0 };//�ַ����� - ����ַ�����
	                   //ָ������ - ���ָ�루��ַ����
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	int* arr2[4] = {&a, &b, &c, &d};//����ָ������
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(arr2[i]));
	}

	//char* arr3[5];
	return 0;
}

//char short int long float double - ��������
//ѧ��:����+ѧ��+����+�Ա�
//��
//���Ӷ���-��������
//C�����ṩ��һ����struct - �ṹ��ؼ���
//
//ѧ��������
//struct Stu
//{
//	//����ѧ�����������
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//}s2,s3,s4;//s2,s3,s4 ���Ǵ����Ľṹ�����-ȫ�ֱ���
//
//int main()
//{
//	//s1�Ǿֲ�����
//	struct Stu s1;//ѧ������s1
//
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//
//typedef struct T
//{
//	char buf[20];
//	struct S s;
//	int *p;
//}T;
//
////typedef - ���Ͷ���- �����ض���
//
//int main()
//{
//	int a = 10;
//	//struct S s = {100, 'w', "bit", 3.14};
//	//
//	//�ṹ�����.��Ա��
//	//�ṹ��ָ��->��Ա��
//	//
//	T st = { "hello bit", {1000, 'b', "abcdef", 4.4}, &a};
//	T* pt = &st;
//	printf("%s\n", pt->buf);
//	printf("%lf\n", pt->s.d);
//
//	//printf("%s\n", st.buf);
//	//printf("%d\n", st.s.a);
//	//printf("%c\n", st.s.c);
//	//printf("%s\n", st.s.arr);
//	//printf("%lf\n", st.s.d);
//	//printf("%d\n", *(st.p));
//
//	//struct T st2;
//
//	return 0;
//}
//struct Stu
//{
//	//����ѧ�����������
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//};//s2,s3,s4 ���Ǵ����Ľṹ�����-ȫ�ֱ���
//
//void print1(struct Stu tmp)
//{
//	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
//}
//
//int main()
//{
//	struct Stu s = {"����", "2019010305", 20, "��"};
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main0()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}