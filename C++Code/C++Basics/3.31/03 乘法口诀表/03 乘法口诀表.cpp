#include<stdio.h>
/*
ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���
*/
int Table(int n){
	if (n <= 0){
		return -1;
	}
	int i = 0;
	
	for (i = 1; i <= n; i++){
		int j = 0;
		for (j = 1; j <= i; j++){
			printf("%d*%d=%-2d ", i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}

int main(){
	int n;
	printf("������һ��������");
	scanf_s("%d", &n);
	Table(n);
	return 0;
}