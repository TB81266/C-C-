#include<iostream>
using namespace std;

class Complex;
Complex operator+(int real, const Complex& obj);
istream& operator>>(istream&in,  Complex& obj);
ostream& operator<<(ostream&out, const Complex& obj);


class Complex{
public:
	friend Complex operator+(int real, const Complex& obj);
	friend istream& operator>>(istream&in, Complex& obj);
	friend ostream& operator<<(ostream&out, const Complex& obj);
	Complex(){
		m_real = 0;
		m_imag = 0;  
	}
	Complex(int real,int imag):m_real(real),m_imag(imag){}
	void ComplexShow(const Complex& obj){
		cout << obj.m_real << "+" << obj.m_imag << "i" << endl;
	}
	//�������캯����ʵ��
	Complex(const Complex& obj){
		m_real = obj.m_real;
		m_imag = obj.m_imag;
	}
	~Complex(){
		cout << "��������������" << endl;
		m_real = 0;
		m_imag = 0;
	}
public:
	//��������� + 
	Complex operator+(const Complex& obj){ 
		//��һ��д�� ��return temp;��ʱ�������������� ���ÿ������캯�� Ч����Խϵ�
		//Complex temp (this->m_real + obj.m_real, this->m_imag + obj.m_imag);
		//return temp;
		return Complex (this->m_real + obj.m_real, this->m_imag + obj.m_imag);
	}
	//���������+�� �����볣�����
	Complex operator+(int real){
		return Complex(this->m_real + real, m_imag);
	}
	//��������� - ��
	Complex operator-(const Complex & obj){
		return Complex(this->m_real - obj.m_real, this->m_imag - obj.m_imag);
	}
	//��������� %��
	Complex operator%(const Complex &obj){
		return Complex(this->m_real % obj.m_real, this->m_imag % obj.m_imag );
	}
	//��������� * 
	Complex operator*(const Complex &obj){
		return Complex(obj.m_real * this->m_real, obj.m_imag * this->m_imag);
	}
	//��������� = 
	Complex& operator=(const Complex&obj){
		if (this != &obj){
			m_real = obj.m_real;
			m_imag = obj.m_imag;
		}
		return *this;
	}
	//���������+=
	Complex& operator+=(const Complex& obj){
		this->m_real = this->m_real + obj.m_real;
		this->m_imag = this->m_imag + obj.m_imag;
		Complex(this->m_real, this->m_imag);
		return *this;
	}
	//��������� -=
	Complex& operator-=(const Complex& obj){
		this->m_real = this->m_real - obj.m_real;
		this->m_imag = this->m_imag - obj.m_imag;
		Complex(this->m_real, this->m_imag);
		return *this;
	}
	//��������� >>
	//instream& operator>>(const instream& obj)
	//���������<<
private:
	int m_real;
	int m_imag;
};

//���������+�� �����븴�����
Complex operator+(int real, const Complex& obj){
	return Complex(real + obj.m_real, obj.m_imag);
}
//���������>>
istream& operator>>(istream& in, Complex& obj){
	in >> obj.m_real >> obj.m_imag;
	return in;
}

//���������<<
ostream& operator<<(ostream&out, const Complex& obj){
	out << obj.m_real << "+" << obj.m_imag << "i";
	return out;
}
int main(){
	Complex c1(1, 3);
	Complex c2(6, 6);
	Complex c3;
	c3 = c1 + c2;
	c3.ComplexShow(c3);
	c3 = c2 - c1;
	c3.ComplexShow(c3);
	c3 = c3 % c1;
	c3.ComplexShow(c3);
	c3 = c2 * c1;
	c3.ComplexShow(c3);
	c3 += c1; 
	c3.ComplexShow(c3);
	c3 = c3 -= c1;
	c3.ComplexShow(c3);
	c3 = c1 + 10;
	c3.ComplexShow(c3);
	c3 = 10 + c1;
	c3.ComplexShow(c3);
	Complex c4;
	cout << "c4:";
	cin >>c4;
	cout << "c4 = " << c4 << endl;
	return 0; 
}