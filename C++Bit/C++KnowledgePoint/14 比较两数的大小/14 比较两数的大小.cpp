#include<iostream>
#include<stdlib.h>
using namespace std;

int compareSize(int x, int y){
	int c = (x > y ? x : y);
	return c;
}

int main(){
	int a = 0;
	int b = 0;
	cout << "��������ֵa:";
	cin >> a;
	cout << "��������ֵb:";
	cin >> b;
	cout<<"������Ƚϴ�ֵΪ��"<<compareSize(a, b)<<endl;
	return 0;
}