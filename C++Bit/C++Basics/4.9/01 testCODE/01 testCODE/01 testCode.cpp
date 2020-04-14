#include<stdio.h>
void print_arr1(int arr[3][5], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++){
		for (j = 0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("========================\n");
}

void print_arr2(int(*arr)[5], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++){
		for (j = 0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main04(){
		int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		print_arr1(arr, 3, 5);
		//������arr����ʾ��Ԫ�صĵ�ַ
		//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
		//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
		//��������ָ��������
		print_arr2(arr, 3, 5);
		return 0;
	}

int main03(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
	//��������һ���������д����
	return 0;
}
int main02(){
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1= %p\n", &arr + 1);
	return 0;
}

int main01(){
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	return 0;
}

int main06(){
	char ch = 'w';
	char* p = &ch;
	*p = 'w';
	return 0;
}

int main07(){
	char* ptr = "hello bit.";
	printf("%s\n", ptr);
	return 0;
}


int main08(){
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	return 0;
}


//void test(int arr[])//ok?ok
//{}
//void test(int arr[10])//ok?ok
//{}
//void test(int *arr)//ok?ok
//{}
void test2(int *arr[20])//ok?ok
{}
//void test2(int **arr)//ok?ok
//{}
int main09(){
	int arr[10] = { 0 };
	int *arr2[20] = { 0 };//ָ������ 
	//test(arr);
	//test2(arr2);
	return 0;
}




//void test(int *arr)//ok��
//{}
//void test(int* arr[5])//ok��no
//{}
//void test(int arr[][])//ok��no
//{}
//void test(int **arr)//ok��no
//{}
//void test(int arr[3][5])//ok��
//{}
//void test(int(*arr)[5])//ok��ok
//{}
//void test(int arr[][5])//ok��ok
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء� //�����ŷ������㡣
//int main10(){
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void printY(int *p, int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d\n", *(p + i));
//	}
//}
//int main11{
//		int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//		int *p = arr;
//		int sz = sizeof(arr) / sizeof(arr[0]);     //һ��ָ��p����������
//		printY(p, sz);
//		return 0;
//}

//#include <stdio.h>
//void test(int** ptr){
//	printf("num = %d\n", **ptr);
//}
//int main12(){
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


#include <stdio.h>
void test(){
	printf("hehe\n");
}
int main13(){
	printf("%p\n", test);
	printf("%p\n", &test);
	return 0;
}
//���ȣ�signal�Ǻ���������������������int �� void(*)(int)����
//һ����int�Ͳ�����һ���Ǻ���ָ�루��������Ϊvoid������Ϊint����
//��������ķ���ֵ��һ��ָ��*signal(int, void(*)(int)) ָ������
//ָ������������������Ϊvoid��Ϊ����ָ������ͣ�

//void test(const char* str){
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��pfun
//	void(*pfun)(const char*) = test;
//	//����ָ�������pfunArr
//	void(*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//ָ����ָ������pfunArr��ָ��ppfunArr
//	void(*(*ppfunArr)[10])(const char*) = &pfunArr;
//	return 0;
//}

#include <stdio.h>

int int_cmp(const void * p1, const void * p2){
	return (*(int *)p1 - *(int *)p2);
}

void _swap(void *p1, void * p2, int size){
	int i = 0;
	for (i = 0; i< size; i++){
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *)){
	int i = 0;
	int j = 0;
	for (i = 0; i< count - 1; i++){
		for (j = 0; j<count - i - 1; j++){
			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0){
				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}

int main(){
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}