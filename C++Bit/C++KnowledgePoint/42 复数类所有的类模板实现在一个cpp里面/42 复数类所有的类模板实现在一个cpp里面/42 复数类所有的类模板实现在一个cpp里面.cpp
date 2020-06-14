#include<iostream>
using namespace std;

template <typename T>
class Complex{
public:
	friend ostream& operator<<<T>(ostream& out, const Complex& obj);//ע����������� ֻ��Ҫ�ڡ� ����� ģ������
	Complex(T a, T b);
	void ComplexShow();
public:
	Complex<T> operator+(const Complex<T>& obj);
private:
	T a;
	T b;
};

////////////////////////////////////////////////////////////////
//���캯����ʵ�� д��������ⲿ
//���������<<
template <typename T>
ostream& operator<<(ostream& out, const Complex<T>& obj){
	out << "a = " << obj.a << ",b = " << obj.b;
	return out;
}

//���Ա ���������+ 
template <typename T>
Complex<T> Complex<T>:: operator+(const Complex<T>& obj){
	Complex<T> temp(a + obj.a, b + obj.b);
	return temp;
}

//���캯��
template <typename T>
Complex<T>:: Complex<T>(T a, T b){
	this->a = a;
	this->b = b;
}


//��ĳ�Ա���� 
template <typename T>
void Complex<T>::ComplexShow(){
	cout << "a = " << a << " b = " << b << endl;
}
//////////////////////////////////////////////////////////////////

int main(){
	//��Ҫ��ģ������о��廯�Ժ�,���ܶ������,C++������Ҫ�����ڴ�
	Complex<int> c1(10, 30);
	Complex<int> c2(20, 30);
	Complex<int> c3 = c1 + c2;

	cout << "c3: " << c3 << endl;
	c3.ComplexShow();
	return 0;
}