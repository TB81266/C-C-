#include<iostream>
using namespace std;

template <typename T>
class Complex{
public:
	Complex(T a = 0, T b = 0);
	void printCom();
	Complex<T> operator+(Complex<T> &c2);
	friend ostream& operator<< <T>(ostream &out, Complex<T> &c3);
protected:
private:
	T a;
	T b;
};

//���캯����ʵ��,д��������ⲿ
template <typename T>
Complex<T>:: Complex(T a = 0, T b = 0){
	this->a = a;
	this->b = b;
}

template <typename T>
void Complex<T>::printCom(){
	cout << "a = " << a << ",b = " << b << endl;
}
//��Ա����ʵ��+�����������
template <typename T>
Complex<T> Complex<T>::operator+(Complex<T> &c2){
	Complex tmp(a + c2.a, b + c2.b);
	return tmp;
}
//��Ԫ����ʵ��<<���������
template <typename T>
ostream& operator<< (ostream &out, Complex<T> &c3){
	out << c3.a << "+" << c3.b << "i" << endl;
	return out;
}


int main(){
	Complex<int> c1(2, 4), c2(3, 5);
	c1.printCom();
	Complex<int> c3 = c1 + c2;
	cout << "c3 = " << c3 << endl;
	return 0;
}