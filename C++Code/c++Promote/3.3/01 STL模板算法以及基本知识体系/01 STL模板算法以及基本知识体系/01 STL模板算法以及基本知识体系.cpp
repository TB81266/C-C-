#include<iostream>
#include"vector";
#include"algorithm";
using namespace std;

class Teacher{
public:
	int age;
	char name[64];
public:
	void printT(){
		cout << "age=" << age << endl;
	}
protected:
private:
};

int main(){
		{
			//�����в�������װ�������������ͣ�Ҳ����װ��
			Teacher t1, t2, t3;
			t1.age = 90;
			t2.age = 44;
			t3.age = 89;
			vector<Teacher> v2;
			v2.push_back(t1);
			v2.push_back(t2);
			v2.push_back(t3);
			for (vector<Teacher>::iterator it = v2.begin(); it != v2.end(); it++){
				cout << "it->age:" << it->age << endl;
			}

		}
	cout << "=========================" << endl;
	{
		//�����в�������װ�������������ͣ�Ҳ����װָ��
		//�����а�t1��t2��t3�ڴ���׵�ַ ���뵽������
		Teacher t1, t2, t3;
		t1.age = 90;
		t2.age = 44;
		t3.age = 89;
		Teacher *p1, *p2, *p3;
		p1 = &t1;
		p2 = &t2;
		p3 = &t3;
		vector<Teacher*> v3;
		v3.push_back(p1);
		v3.push_back(p2);
		v3.push_back(p3);
		for (vector<Teacher* >::iterator it = v3.begin(); it != v3.end(); it++){
			cout << "��*it��->age:" << (*it)->age << endl;
		}
	}

	cout << "=========================" << endl;
	//���� �����Ԫ�ؿ����������У�
	vector<int> v1;
	v1.push_back(-1);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(3);
	//�������൱��һ��ָ�� 
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		cout << "*it=" << *it << endl;
	}
	//�㷨�Ļ�������
	//count ������ͳ����������ֵĴ���
	int num1 = count(v1.begin(), v1.end(), 3);
	cout << "num1=" << num1 << endl;
	cout << "=========================" << endl;
	return 0;
}