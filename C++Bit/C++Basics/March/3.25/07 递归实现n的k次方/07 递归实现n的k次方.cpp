/*
�ݹ�ʵ��n��k�η�

��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
*/

#include<stdio.h>

int Function(int n, int k){
	if (k == 0)
		return 1;
	else if (k >= 1)
	{
		return n*Function(n, k - 1);
	}
}
int main(){
	int n,k;
	printf("������һ������n��\n");
	
	scanf_s("%d", &n);
	printf("������һ������k��");
	scanf_s("%d", &k);
	printf("Function = %d\n", Function(n, k));


	return 0;
}