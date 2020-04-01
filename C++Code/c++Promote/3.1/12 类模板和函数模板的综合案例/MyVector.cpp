#include<iostream>
#include"MyVector.h"
using namespace std;

template <typename T>
int MyVector<T>::getlen(){
	return m_len;
}

template <typename T>
MyVector<T>::MyVector(int size = 0){
	m_space = new T[size];
	m_len = size;
}

//myv2=myv1 ��ģ��Ŀ���
template <typename T>
MyVector<T>::MyVector(const MyVector &obj){
	//����myv1�Ĵ�С�����ڴ�  copy����
	m_len = obj.m_len;
	m_space = new T[m_len];

	//copy
	for (int i = 0; i < m_len; i++){
		m_space[i] = obj.m_space[i];
	}
}

template <typename T>
ostream & operator<< (ostream& out, MyVector<T>& obj){
	for (int i = 0; i < obj.m_len; i++){
		out << obj.m_space[i] << " ";
	}
	out << endl;
	return out;
}

template <typename T>
T& MyVector<T>::operator[](int index){
	return m_space[index];
}

// = a2 =a1
template <typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T> &obj){
	//�Ȱ�a2�ľ��ڴ��ͷ�
	if (m_space != NULL){
		delete[] m_space;
		m_len = 0;
	}
	//����a1�����ڴ�
	m_len = obj.m_len;
	m_sapce = new T[m_len];

	for (int = 0; i < m_len; i++){
		m_space[i] = obj[i];
	}
	return *this;
}
template <typename T>
MyVector<T>::~MyVector(){
	if (m_space != NULL){
		delete[] m_space;
		m_space = NULL;
		m_len = 0;
	}
}



