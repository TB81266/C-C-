#include<stdio.h>


//���õݹ�ķ������׳�
int factorial(int m){
	if (m > 1)
		return factorial(m - 1) * m;
	return 1;
}

//����ѭ���ķ�ʽ
int Factorial(int m){
	int result = 1;
	for (int i = 1; i <= m; i++){
		 result = i*result;
	}
	return result;
}
int main(){
	int n;
	printf("����������n��");
	scanf_s("%d\n",&n);
	int x = factorial(n);
	printf(" x =%d\n",x);
	int y = Factorial(n);
	printf(" y =%d\n", y);
	return 0;
}