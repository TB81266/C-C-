#include<iostream>
using namespace std;
//����ģ�����Ϻ�������
//myswap �Ǻ�������
template <typename T>
void myswap(T &a, T &b){
	T c = 0;
	c = a;
	a = b;
	b = c;
	cout << "���Ǻ���ģ�壡��" << endl;
}
void myswap(int a, char c){
	cout << "a = " << a << ",c = " << c << endl;
	cout << "������ͨ����,��ӭ����" << endl;
}


int main(){
	int a = 10;
	char c = 'z';

	myswap(a, c);	//�ϸ��ƥ�亯��ģ�壬���ʣ����Ͳ�����
	cout << "----------------" << endl;
	myswap(a, a);	//���Խ���Ӱʽ������ת����
	cout << "----------------" << endl;
	myswap(c, a);
	cout << "----------------" << endl;
	return 0;
}