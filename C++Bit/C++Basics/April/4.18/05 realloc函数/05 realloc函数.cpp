#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(){
	int *ptr = (int*)malloc(100);
	if (ptr != NULL){
		printf("�ڴ����ɹ���");
	}
	else{
		exit(EXIT_FAILURE);
	}
	//��չ����
	//����1
	ptr = (int*)realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)
	//����2
	int*p = NULL;
	p = (int*)realloc(ptr, 1000);
	if (p != NULL){
		ptr = p;
	}
	//ҵ����
	free(ptr);
	return 0;
}