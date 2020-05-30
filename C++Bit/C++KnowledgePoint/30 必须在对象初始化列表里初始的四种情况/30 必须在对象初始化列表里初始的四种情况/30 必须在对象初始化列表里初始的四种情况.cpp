#include<iostream>
using namespace std;


class animal{
public:
	animal(const char * name){
		_len = strlen(name);
		_name = new char[_len + 1];
		strcpy(_name, name);
		cout << "name:" << _name << endl;
	}
	
	~animal(){
		if (_name != NULL){
			delete[] _name;
			_name = nullptr;
			_len = 0;
		}
	}
private:
	char * _name;
	int  _len;
};

class person{
public:

	person(const char* name,const char* sex) :m_sex("boy"),pig("Pig"),dog("Dog"),cat("Cat"){
		m_len =strlen(name);
		m_name = new char[m_len + 1];
		strcpy(m_name, name);
	}
~person(){
		if (m_name != NULL){
			delete[] m_name;
			m_name = nullptr;
			m_sex = nullptr;
			m_len = 0;
		}
	}
public:
	void personShow(){
		cout << "name:" << m_name <<", sex:"<< m_sex << endl;
	}
private:
	 char* m_name;
	 const char* m_sex;	//��һ�������������const ��Ա�����ڳ�ʼ���б������ʼ��
	 int m_len;
	 animal pig;//�ڶ���������� ����ڲ��������  ��ʼ����ʱ�����ʹ�ò�����ʼ���б�  pig dog
	 animal dog;
	 const animal& cat;//������������� ����ڲ�������� & 
	 
};


int main(){
	person p1("xiaofeng","boy");
	p1.personShow();
	return 0;
}