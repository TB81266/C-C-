#include<iostream>
using namespace std;

class Parent{
public:
	void print(){
		cout << "Parent:print() do..." << endl;
	}
};

class Child : public Parent{
	public:
		void print(){
			cout << "Child:print() do..." << endl;
		}
};

void howToPrint(Parent* p){
	p->print();
}

void run(){
	Child child;
	Parent* pp = &child;
	Parent& rp = child;

	child.print();//��ӡ����ĺ�����Ҳ����ִ������ĺ���

	//ͨ��ָ��
	pp->print();
	//ͨ������
	rp.print();
	howToPrint(&child);
}
int main(){
	run();
	system("pause");
	return 0;
}

int main02(){
	Child child;
	Parent *p = NULL;
	p = &child;
	child.print();
	child.Parent::print();//�������ͨ��������ֱ��::���Է��ʵ������б����صĺ���
	system("pause");
	return 0;
}


/*
������д
�������ж����븸����ԭ����ͬ�ĺ���
������дֻ�����ڸ���������֮��

�����б���д�ĺ�����Ȼ��̳и�����
Ĭ���������������д�ĺ��������ظ����еĺ���
ͨ��������ֱ��::���Է��ʵ������б����صĺ���

*/