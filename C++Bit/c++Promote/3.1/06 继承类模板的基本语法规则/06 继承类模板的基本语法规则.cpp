#include<iostream>
using namespace std;
//ģ���� 
template <typename T>
class A{
public:
	A(int a = 0){
		this->a = a;
	}
public:
	void printA(){
		cout << "a :" << a << endl;
	}
protected:
	T a;
private:

};
//��ģ��������ʱ����Ҫ���廯ģ���࣬c++��������Ҫ֪����
//������������;�����ʲô���ӵ� ��Ҫ֪��������ռ�������ڴ��С�Ƕ��٣�ֻ���������͹̶���������֪����η����ڴ�
class B :public A<int>{
public:
	B(int a = 10, int b = 30) :A <int>(a){
		this->b = b;
	}
	void printB(){
		cout << "a :" << a << ",b :" << b << endl;
	}
private:
	int b;
protected:
};

void UseA(A<int>& a){
	a.printA();
}

int main(){
	/*A <int> a1(520);
	a1.printA();
	UseA(a1);*/
	B b1(20, 40);
	b1.printB();
	return 0;
}