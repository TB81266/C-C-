/*
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
*/
#include<stdio.h>

int main(){
	int a = 0; 
	int num = 0;
	printf("������һ��������");
	scanf_s("%d", &num);
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++){
		a = a * 10 + num;
		sum = a + sum;
	}
	printf("sum = %d\n", sum);
	return 0;
}