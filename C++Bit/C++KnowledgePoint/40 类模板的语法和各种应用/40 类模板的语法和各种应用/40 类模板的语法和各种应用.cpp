#include<iostream>
using namespace std;

//ģ���� 
template <class T>
class A{
public:
	A(T a){
		this->a = a;
	}
	void printfA(){
		cout << "a = " << this->a << endl;
	}
public:
	T a;
};
//��ģ������������ͨ��
//ģ��������ʱ, ��Ҫ���廯ģ����. C++��������Ҫ֪��,������������;�����ʲô���ӵ�
//Ҫ֪��������ռ���ڴ��С�Ƕ��٣�ֻ���������͹̶�����,��֪����η����ڴ� 

class B:public A<int>{
public:
	B(int b) :A<int>(a){
		this->b = b;
	}
	void printfB(){
		cout << "b = " << this->b << endl;
	}
private:
	int b;
};

//��ģ���� ���� ģ����
template<typename T>
class C :public A <T> {
public:
	C(T c,T a): A<T>(a){
		this->c = c;
		this->a = a;
	}
	void printfC(){
		cout << "c = " << this->c << endl;
		cout << "a = " << this->a << endl;
	}
private:
	T c;
};
//��ģ�� ����������
//���� ,C++������Ҫ�������࣬����Ҫ A<int> &a 
void UseA(A<int> &a){
	a.printfA();
}

int  main(){
	A<int> a1(10);//ģ�����ǳ����  ====>��Ҫ�������;���,�������ſ��Է����ڴ�ռ�
	a1.printfA();
	UseA(a1);

	B b1(20);
	b1.printfB();

	C<int> c1(12, 24);
	c1.printfC();
	return 0;
}