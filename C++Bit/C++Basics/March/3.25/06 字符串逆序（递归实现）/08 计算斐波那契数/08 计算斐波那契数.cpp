/*
����쳲�������
n>1��F(n)=F(n-1)+F(n-2);
F(0)=0;
F(1)=1;
���n��쳲�������

�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
���磺
���룺5,�����5
���룺10,�����55
���룺2,�����1
*/

#include<stdio.h>
//�ݹ�ʵ��
int Fibonacci01(int num){
	if (num == 1 || num == 2){
		return 1;
	}
	return Fibonacci01(num - 1) + Fibonacci01(num - 2);
}
//�ǵݹ�ʵ��
int Fibonacci02(int num){
		int n1 = 1,
			n2 = 2,
			result = 1;
		for (int i = 3; i <= num; i++){
			result = n1 + n2;
			n1 = n2;
			n2 = result;
		}
		return result;
}

int main(){
	int n;
	printf("������һ������");
	scanf_s("%d", &n);
	printf("Fibonacci01 = %d\n", Fibonacci01(n));
	printf("Fibonacci02 = %d\n", Fibonacci02(n));
	return 0;
}