#include<iostream>
using namespace std;

void test(){
	static int a = 1;//static�ؼ��������˾ֲ��������������� ����ȫ�ֵ�ʹ�÷�Χ
	a++;
	cout << a << "";
	cout << endl;
}

int main(){
	int i = 0;
		while (i < 10){
		test();
		i++;
		}

	return 0;
}