#include<iostream>
using namespace std;

void compareSize(int * x, int * y){
	if (x < y){
		cout << "a��b������ȣ���ֵΪa=��" << *x << endl;
	}
	else{
		cout << "a��b������ȣ���ֵΪb=��" << *y << endl;
	}
}

int main(){
	int a = 0;
	int b = 0;
	cout << "��������ֵa:";
	cin >> a;
	cout << "��������ֵb:";
	cin >> b;
	compareSize(&a, &b);
	return 0;
}