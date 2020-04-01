#include<iostream>
#include"vector"
using namespace std;


class Teacher{
public:
	Teacher(char* name, int age){
		m_pname = new char[strlen(name) + 1];
		strcpy(m_pname, name);
		m_age = age;
	}
	~Teacher(){
		if (m_pname != NULL){
			delete[] m_pname;
			m_pname = NULL;
			m_age = 0;
		}
	}
	//t2 = t1 t1��ʼ��t2
	Teacher(const Teacher& obj){
		m_pname = new char[strlen(obj.m_pname) + 1];
		strcpy(m_pname, obj.m_pname);
		m_age = obj.m_age;
	}
	//���صȺŲ�����t3 = t2 = t1
	Teacher & operator=(const Teacher& obj){
		//�Ȱ�t2�ľɵ��ڴ��ͷŵ� ����t1 �Ĵ�С�����ڴ�ռ� Ȼ�󿽱����� 
		if (m_pname != NULL){
			delete[] m_pname;
			m_pname = NULL;
			m_age = 0;
			//����t1�ڴ��С����ռ�
			m_pname = new char[strlen(obj.m_pname) + 1];
			strcpy(m_pname, obj.m_pname);
			m_age = obj.m_age;
			return *this;
		}
 	}

public:
	void printT(){
		cout << m_pname << "\t" << m_age << endl;
	}

protected:
private:
	char *m_pname;
	int  m_age;
};

void VectorUse01(){
	Teacher t1("t1", 31);
	vector<Teacher> v1;
	v1.push_back(t1);//��t1 �����������ڣ������������ ����done��
	t1.printT();
}
int main(){
	VectorUse01();
	return 0;
}