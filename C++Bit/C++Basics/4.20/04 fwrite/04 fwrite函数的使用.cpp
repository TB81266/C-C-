#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main(){
	int ar[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	int n = sizeof(ar) / sizeof(ar[0]);
	FILE *fp = fopen("Test1.txt", "wb");//wb�Զ�����д��  
	if (NULL == fp){
		printf("Open File Failed.\n");
		return;
	}
	fwrite(ar, sizeof(int), n, fp);//д�����ı��ĵ���д��������  
	fclose(fp);
}