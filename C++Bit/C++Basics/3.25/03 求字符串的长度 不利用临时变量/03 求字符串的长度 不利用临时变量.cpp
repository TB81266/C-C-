#include<stdio.h>
//����1 ������ʱ����
int my_String01(char* arr){
	int count = 0;
	while (*arr != '\0'){
		count++;
		arr++;
	}
	return count;
}

//����2 ���õݹ�ķ��� ����Ҫ��ʱ����
int my_String02(char* str){
	if (*str != '\0'){
		return 1 + my_String02(str + 1);
	}
	else{
		return 0;
	}
}
int main(){
	char arr[] = "shangxiaofeng";
	int len01 = my_String01(arr);
	int len02 = my_String02(arr);
	printf("1�ַ����ĳ���Ϊ��%d\n", len01);
	printf("2�ַ����ĳ���Ϊ��%d\n", len02);

	return 0;
}


