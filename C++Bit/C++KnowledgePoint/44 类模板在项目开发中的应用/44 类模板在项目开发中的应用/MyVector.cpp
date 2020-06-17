#include"MyVector.h"

//���캯����ʵ��
template<typename T>
MyVector<T>::MyVector(int len = 0){
	m_len = len;
	m_space = new T[len];
	
}
//�������캯����ʵ��
template<typename T>
MyVector<T>::MyVector(const MyVector& obj){ 
	//����1 ��������С 
	m_len = obj.m_len;
	m_space = new T[m_len];

	//��1��������ݿ���=�������ڴ�Ŀռ� Ҳ����2
	for (int i = 0; i < m_len; ++i){
		m_space[i] = obj.m_space[i];
	}
}
//����������ʵ��
template<typename T>
MyVector<T>::~MyVector(){
	if (m_space != NULL){
		delete[] m_space;
		m_space = NULL;
		m_len = 0;
	}
}

//����<<
template<typename T>
ostream& operator<<(ostream& out,  MyVector<T>& obj){
	for (int i = 0; i < obj.getLen(); ++i){
		out << obj.m_space[i] << " ";
	}
	cout << endl;
	return out;
}
//����[]
template<typename T>
T& MyVector<T>:: operator[](T index){
	return m_space[index];
}

//���صȺ�=
template<typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& obj){
	if (m_space != NULL){
		delete[] m_space;
		m_space = NULL;
		m_len = 0;
	}

	m_len = obj.m_len;
	m_space = new T[m_len];

	for (int i = 0; i < m_len; ++i){
		m_space[i] = obj.m_space[i];
	}
	return *this;
}

//��ȡ����
template<typename T>
int MyVector<T>::getLen(){
	return m_len;
}

//���
template<typename T>
void MyVector<T>::MyVectorShow( MyVector&obj){
	for (int i = 0; i < obj.getLen(); ++i){
		cout << obj.m_space[i] << " ";
	}
	cout << endl;
}

	