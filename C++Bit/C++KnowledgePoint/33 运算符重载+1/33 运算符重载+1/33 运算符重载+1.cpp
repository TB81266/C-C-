#include<iostream>
using namespace std;

class INT;
ostream& operator<<(ostream& out, const INT& obj);
istream& operator>>(istream& in, INT& obj);

class INT{
public:
	friend ostream& operator<<(ostream& out, const INT& obj);
	friend istream& operator>>(istream& in, INT& obj);
	INT(int val) :m_val(val){}

	INT(const INT& obj){
		m_val = obj.m_val;
	}

	~INT(){
		m_val = 0;
	}
public:
	INT operator+(const INT& obj){
		return obj.m_val + m_val;
	}
	INT operator-(const INT& obj){
		return obj.m_val - m_val;
	}
	// ����ֻ�Ƿ���һ������ĸ�������������m_val++���ֵ(��Ϊ�Ǻ���++),���Ժ���++ֻ����ȡֵ��Ȼ����++
	INT operator++(int){
		int temp = 0;
		m_val++;
		return temp;
	}
	// ����һ�����ü�����ǰ������
	INT& operator++(){
		 m_val++;
		 return *this;  // ���ص�ǰ����(���������ֳ���ǰ��++��ֵ)
	}
	INT operator--(int){
		int temp = 0;
		m_val--;
		return temp;
	}
	INT& operator--(){
		m_val--;
		return *this;
	}
	INT& operator-=(const INT& obj){
		m_val -= obj.m_val;
		return *this;
	}
	INT operator+=(const INT& obj){
		m_val += obj.m_val;
		return *this;
	}
	bool operator== (const INT& obj){
		return m_val == obj.m_val;
	}
	bool operator!=(const INT& obj){
		return !(m_val == obj.m_val);
	}
private:
	int m_val;
};

ostream& operator<<(ostream& out, const INT& obj){
	out << obj.m_val;
	return out;
}

istream& operator>>(istream& in, INT& obj){
	in >> obj.m_val;
	return in;
}

int main(){
	INT A(6);
	INT B(8);
	INT C = A + B;
	cout << "C = " << C << endl;
	INT D = A - B;
	cout << "D = " << D << endl;
	INT E(0);
	cout<< "������E��ֵ:";
	cin >> E;
	cout << "E = " << E << endl;

	INT F(88);
	F++;
	cout << "F++ = " << F << endl;
	++F;
	cout << "++F =" << F << endl;

	INT H(100);
	H--;
	cout << "H-- = " << H << endl;
	++H;
	cout << "--H =" << H << endl;

	INT L(55);
	L+= H;
	cout << "L = " << L << endl;

	INT M(66);
	M -= H;
	cout << "M = " << M << endl;

	if (M == H){
		cout << "M �� H ��ȣ�" << endl;
	}
	else{
		cout << "M �� H ����ǣ�" << endl;
	}
	return 0;
}