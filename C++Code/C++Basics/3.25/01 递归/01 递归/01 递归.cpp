////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.

#include<stdio.h>

void Print(unsigned n){
	if (n > 9){
		unsigned m = n / 10;
		Print(m);
	}
		printf("%d ", n%10);
}

int main(){
	unsigned int num = 0;
	printf("��������Ҫ��ӡ�����֣�");
	scanf_s("%d", &num);
	Print(num);
	return 0;
}