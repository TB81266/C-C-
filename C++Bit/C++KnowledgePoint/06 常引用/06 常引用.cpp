#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int &b = a;
	b = 20;
	cout << "a= " << a << endl;
	const int &c = a;	//��a����ȥ��ʼ�� ������c
	//c = 90;//error ��Ϊ���������� �ñ��� ����ֻ������ ����ͨ��cȥ�޸�a�ˣ�cӵ��ֻ��������



	return 0;
}