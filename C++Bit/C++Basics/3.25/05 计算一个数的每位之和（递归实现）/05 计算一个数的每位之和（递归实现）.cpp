/*
����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19
*/
#include<stdio.h>

int DigitSum(int m){
	if (m < 10){
		return m;
	}
	else{
		return  m % 10 + DigitSum(m / 10);
	}
}
int main(){
	int n;
	printf("������һ���Ǹ�������");
	scanf_s("%d", &n);
	printf("DigitSum = %d\n", DigitSum(n));


	return 0;
}