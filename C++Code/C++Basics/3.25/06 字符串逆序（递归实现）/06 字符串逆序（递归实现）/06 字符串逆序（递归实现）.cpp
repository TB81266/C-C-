/*
�ַ������򣨵ݹ�ʵ�֣�

��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
*/

#include<stdio.h>
#include"string.h"

//�ݹ�ʵ��
/*
�ݹ鷽ʽ��
�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��
1. ����a��g��
2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
*/
void reverse_string(char* arr){
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

//����ѭ��ʵ��
void reverse_string02(char* string,int len){
	int mid = len / 2;
	int i = 0;
	for (i = 0; i < mid; i++){
		int temp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = temp;
	}
}
void printfString(char * string,int len){
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%c ",string[i]);
	}
	printf("\n");
}

//����ѭ��ʵ��
void reverse_string03(char* arr){
	char *left = arr;
	char *right = arr + strlen(arr) - 1;

	while (left<right){
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}

int main(){
	char s1[] = "bitGood" ;
	int length = sizeof(s1) / sizeof(s1[0]);
	printfString(s1,length);
	reverse_string(s1);

	reverse_string02(s1, length);

	printfString(s1, length);
	reverse_string03(s1);
	printfString(s1, length);
	return 0;
}