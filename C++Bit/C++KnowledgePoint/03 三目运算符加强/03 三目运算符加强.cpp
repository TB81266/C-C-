#include<iostream>
using namespace std;
//C�����е���Ŀ��������ص��Ǳ���ֵ��������Ϊ��ֵʹ��
//C++�е���Ŀ�������ֱ�ӷ��ر���������˿��Գ����ڳ�����κεط�
int main(){
	int a = 10;
	int b = 20;
	(a < b ? a : b) = 90;
	cout << a << endl;

	int z = 0;
	z = (a < b ? a : b);
	cout << z << endl;
	return 0;
}