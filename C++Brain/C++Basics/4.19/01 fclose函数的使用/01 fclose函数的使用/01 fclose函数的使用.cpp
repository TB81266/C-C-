#include<stdio.h>
#include <stdlib.h> 
int main(){
	FILE* file = fopen("test.txt", "a");
	if (file == NULL){
		printf("�ļ���ʧ�ܣ�\n");
	}
	fputs("do well", file);
	system ("pause");
	fclose(file);
	printf("�ļ��Ѿ��ر�\n");
	system("pause");
	return 0;
}