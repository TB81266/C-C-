/*
�ַ�����ת���
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.
*/

#include<stdio.h>
#include<assert.h>
#include<string.h>

char* reverse(char * ch){
	assert(ch != NULL);
	char* left = ch;
	char* right = ch+strlen(ch) - 1;
	while (left < right){
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	return ch;
}

int main(){
	char ch[] = {"abba"};
	/*printf("�������ַ�����");
	scanf_s("%s", ch);*/
	char *arr = reverse(ch);
	if (!strstr(arr, "abba") ){
			printf("%s\n", arr);
		return 1;
	}
	else{
		return -1;
	}
	return 0;
}