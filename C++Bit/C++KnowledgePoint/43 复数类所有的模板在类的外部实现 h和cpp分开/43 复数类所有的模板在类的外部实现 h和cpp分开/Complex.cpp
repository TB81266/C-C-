#include"Complex.h"

//���Ա ��������� +
template <typename T>
Complex<T> Complex<T>:: operator+(const Complex<T>& obj){
	Complex<T> temp(a + obj.a, b + obj.b);
	return temp;
}

//���������<<
template <typename T>
ostream& operator<< (ostream& out, const Complex<T>& obj){
	out << "a = " << obj.a << ",b = " << obj.b;
	return out;
}

//���캯��
template <typename T>
Complex<T>::Complex<T> (T a, T b){
	this->a = a;
	this->b = b;
}


//��ĳ�Ա���� 
template <typename T>
void Complex<T>::ComplexShow(){
	cout << "a = " << a << " b = " << b << endl;
}