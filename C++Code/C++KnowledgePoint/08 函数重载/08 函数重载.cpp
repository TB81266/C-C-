#include<iostream>
using namespace std;

//1 ���������Ͳ�ͬ�Ĳ�������ʱ�����ĺ��岻ͬ
//2 �������ص��жϱ�׼
	//���� ���� ����ֵ
	//������ͬ ������һ��(����/����/)
//3 ����ֵ ���� �жϺ������صı�׼ 
//4 ���غ����ĵ��ñ�׼

void function01(int a, int b){
	cout << "a = " << a << ".b = " << b << endl;
}
void function01(int x){
	cout << "x = " << x << endl;
}
void function01(double y){
	cout << " y = " << y << endl;
}
int main(){
	int a = 90;
	int b = 20;
	function01(a,b);
	function01(a);
	function01(b);


	return 0;
}