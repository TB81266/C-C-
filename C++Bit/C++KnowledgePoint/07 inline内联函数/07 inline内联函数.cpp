#include<iostream>
using namespace std;
//2 C++������ֱ�ӽ�����������ں������õĵط�
//3 ��������ʡȥ����ͨ��������ʱѹջ����ת�ͷ��صĿ��� 
inline void function(int &x,int &y){
	x = x^y;
	y = x^y;
	x = x^y;
}

int main(){
	int a = 10; 
	int b = 20;
	function(a,b);
	cout << "a = " << a << ",b = " << b << endl;
	return 0;
}