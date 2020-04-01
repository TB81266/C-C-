#include<iostream>
#include"stack"
using namespace std;
//ջ��ģ��
//ջ���㷨�����ݽṹ����
void StackOfUse01(){
	stack<int> s;
	//��ջ
	for (int i = 0; i < 10; i++){
		s.push(i+1);
	}
	cout << "ջ�Ĵ�С" << s.size() << endl;
	//��ջ
	while (!s.empty()){
		int tmp = s.top();//��ȡջ��Ԫ��
		cout << tmp << " ";
		s.pop();//����ջ��Ԫ��


	}
}

class Teacher{
public:
	int age;
	char name[64];
	void printT(){
		cout << "age= " << age << endl;
	}
protected:
private:
};

void StackOfUse02(){
	Teacher t1, t2, t3;
	t1.age = 22;
	t2.age = 33;
	t3.age = 55;
	stack<Teacher> s;
	s.push(t1);
	s.push(t2);
	s.push(t3);
	while (!s.empty()){
		Teacher tmp = s.top(); 
		tmp.printT();
		s.pop();

	}
}

void StackOfUse03(){
	Teacher t1, t2, t3;
	t1.age = 22;
	t2.age = 33;
	t3.age = 55;
	stack<Teacher*> s;
	s.push(&t1);
	s.push(&t2);
	s.push(&t3);
	while (!s.empty()){
		Teacher *p = s.top();
		 p->printT() ;
		s.pop();

	}
}
int main(){
	//StackOfUse01();
	//StackOfUse02();
	StackOfUse03();

	return 0;
}