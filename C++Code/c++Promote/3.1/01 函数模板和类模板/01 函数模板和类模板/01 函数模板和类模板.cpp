#include<iostream>
using namespace std;

void myswap(int &a,int &b){
	int c = 0; 
	c = a;
	a = b;
	b = c;
}

void myswap02(char &a, char &b){
	int c = 0;
	c = a;
	a = b;
	b = c;
}
//������ҵ���߼�һ��
//�����Ĳ������Ͳ�һ��   ��û��һ�ֻ��� �������Ա��� ��Ϊ�����ͱ�̣�����ģ�壩
template <typename T>
void myswap(T &a,T &b){
	T c = 0;
	c = a;
	a = b;
	b = c;
	cout << "���Ǻ���ģ�壡��" << endl;
}
int main01(){
		{
			int x = 10;
			int y = 20;
			myswap(x, y);
			cout << "x= " << x << ",y=" << y << endl;
		}
	{
		char a = 'a';
		char b = 'b';
		myswap02(a, b);
		cout << "a= " << a << ",b=" << b << endl;
	}
	return 0;
}

//����ģ��ĵ���
//�Զ����͵��Ƶ�
int main(){
	{
		int x = 90;
		int y = 89;
		myswap<int>(x, y);//����1������ģ����ʾ���͵���
		myswap(x,y);//����2���Զ������Ƶ�(�õĽ���)
	}
	{
		char a = 'a';
		char b = 'b';
		myswap<char>(a, b);
		myswap(a,b);//����2���Զ������Ƶ�(�õĽ���)
		cout << "a= " << a << ",b=" << b << endl;

	}
}