/*
ͳ�ƶ�������1�ĸ���
дһ���������ز����������� 1 �ĸ��������磺 15    0000 1111    4 �� 1
*/

#include<stdio.h>
void allNumber(int n){
	int count = 0;
	for (int i = 0; i < 31; i++){
		if ((n >> i)& 1 == 1){
			count++;
		}
	}
	printf("count = %d\n", count);
}

int main(){
	int m;
	printf("������һ��������");
	scanf_s("%d", &m);
	allNumber(m);

	return 0;
}