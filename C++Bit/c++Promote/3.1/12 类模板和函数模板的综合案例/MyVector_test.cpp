#include<iostream>
#include"MyVector.cpp"
using namespace std;

//1  �Ż�Teacher��, ���Ա�� char *panme, ���ú������� �����ڴ�
//2  �Ż�Teacher��,�������� �ͷ�panmeָ����ڴ�ռ�
//3  �Ż�Teacher��,����ǳ���� ����= ��д�������캯�� 
//4  �Ż�Teacher��,��Teacher���� << 
//5  ��ģ����������,��int char Teacher Teacher*(ָ������)
//=====>stl �����ĸ���

class Teacher
{
public:
	Teacher(){
		age = 33;
		m_p = new char[1];
		strcpy(m_p, "");
	}
	Teacher(char *name, int age){
		this->age = age;
		m_p = new char[strlen(name) + 1];
		strcpy(m_p, name);
	}
	Teacher(const Teacher& obj){
		m_p = new char[strlen(obj.m_p) + 1];
		strcpy(m_p, obj.m_p);
	}
	void printT() {
		cout << m_p << ", " << age << endl;
	}
	~Teacher(){
		if (m_p = NULL){
			delete[] m_p;
			m_p = NULL;
		}
	}
public:
	friend ostream& operator<< (ostream& out, Teacher& t);
	Teacher& operator=(const Teacher& obj){
		if (m_p != NULL){
			delete[] m_p;
			m_p = NULL;
			age = 33;
		}
		m_p = new char[strlen(obj.m_p)];
		age = obj.age;
		strcpy(m_p, obj.m_p);
		return * this;
	}
private:
	int age;
	char *m_p;
};

ostream& operator << (ostream& out, Teacher& t){
	out << t.m_p << " " << t.age<<endl;
	return out;
}

int main()
{
	Teacher t1("t1", 31), t2("t2", 32), t3("t3", 33), t4("t4", 34);
	MyVector<Teacher*> tArray(4);
	tArray[0] = &t1;
	tArray[1] = &t2;
	tArray[2] = &t3;
	tArray[3] = &t4;
	for (int i = 0; i<4; i++)
	{
		Teacher* tmp = tArray[i];
		tmp->printT();
	}
	
	system("pause");
	return 0;
}

void main02()
{
	MyVector<char> myv1(10);
	myv1[0] = 'a';
	myv1[1] = 'b';
	myv1[2] = 'c';
	myv1[3] = 'd';
	cout << myv1;
	system("pause");
}

int main01(){
	MyVector<int> myv1(10);
	for (int i = 0; i < myv1.getlen(); i++){
		myv1[i] = i + 1;
		cout << myv1[i] << " ";
	}
	cout << endl;
	MyVector<int>myv2 = myv1;
	for (int i = 0; i < myv2.getlen(); i++){
		cout << myv2[i] << " ";
	}
	cout << myv2 << endl;
	return 0;
}