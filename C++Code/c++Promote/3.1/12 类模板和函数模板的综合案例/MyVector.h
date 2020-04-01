#include<iostream>
using namespace std;

template <typename T>
class MyVector{
public:
	friend 	ostream & operator<< <T>(ostream& out, MyVector &obj);
	MyVector(int size = 0);//���캯��
	MyVector(const MyVector &obj);//�������캯��
	~MyVector();//��������
	int getlen();
public: 
	//���ء�������
	T& operator[](int index);
	//����=����
	MyVector& operator=(const MyVector &obj);
protected:
	//������Ҫȷ�����Ⱥ��׵�ַ
	T *m_space;
	int m_len;
};