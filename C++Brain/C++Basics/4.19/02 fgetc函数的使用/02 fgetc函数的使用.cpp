/*
���󣺰�����ļ���Դ���루test.c����ӡ����
*/

#include<iostream>
#include<assert.h>
#define _CRT_SECURE_NO_WARNINGS 
int main(){
	//���ļ�
	FILE * file; 
		char c;
	file = fopen("test.txt", "r");
	assert(file != NULL);

	/*while (1){
		c = fgetc(file);
		if (c == EOF){
			break;
		}
		printf("%c ", c);
	}*/
	while ((c = fgetc(file)) != EOF){
		printf("%c ", c);
	}
	printf("\n");
	system("pause");
	return 0;
}