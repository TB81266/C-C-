
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int sushu(){
	int i, leap = 1;
	int m;
	scanf("%d", &m);
	for (i = 2; i<m; i++){
		/*�ж�����Ϊ��ʱ������ʾm����1���������������������
		�ж�������Ϊ��ʱ��������ִ�д�if�µ���䣬leapֵ���䣬��Ϊ1�������������ִ��*/
		if (m%i == 0){
			leap = 0;
			break;
		}
	}
	if (leap == 1){
		return leap;
	}
}
int main(){
	switch (sushu()){
	case 1:
		printf("Prime!\n");
		break;
	case 0:
		printf("Not Prime!\n");
		break;
	}
	return 0;
}