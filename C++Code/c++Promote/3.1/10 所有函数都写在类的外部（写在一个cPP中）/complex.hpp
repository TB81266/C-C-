#include<iostream>
#include"complex.h"
using namespace std;


//���캯����ʵ��,д��������ⲿ
template <typename T>
Complex<T>::Complex(T a = 0, T b = 0){
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