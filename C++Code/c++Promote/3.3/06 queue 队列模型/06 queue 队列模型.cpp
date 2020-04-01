#include<iostream>
#include"queue"
using namespace std;

//�Ƚ��ȳ� ����ģ��
void QueueOfUse01(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << "����е�ͷ��Ԫ�أ�" << q.front() << endl;
	cout << "���еĴ�С��" << q.size() << endl;
	while (!q.empty()){
		int tmp = q.front();//��ȡͷ��Ԫ��
		cout << tmp<< " ";
		q.pop(); //����Ԫ��
	}
	cout << endl;
}

//���е��㷨���������͵ķ���,�Ƚ��ȳ����ص�
class Teacher{
public:
	int age;
	char name[64];
public:
	void printT(){
		cout << "age= " << age << endl;
	}
protected:
private:
}; 


void QueueOfUse02(){
	Teacher t1, t2, t3;
	t1.age = 20;
	t2.age = 30;
	t3.age = 40;
	queue<Teacher> q;
	q.push(t1);
	q.push(t2);
	q.push(t3);
	while (!q.empty()){
		Teacher tmp = q.front();
		tmp.printT();
		q.pop();
	}
}

void QueueOfUse03(){
	Teacher t1, t2, t3;
	t1.age = 22;
	t2.age = 33;
	t3.age = 55;
	queue<Teacher*> q;
	q.push(&t1);
	q.push(&t2);
	q.push(&t3);
	while (!q.empty()){
		Teacher *p = q.front();
		p->printT();
		q.pop();
	}
}
int main(){
	//QueueOfUse01();
	QueueOfUse02();
	QueueOfUse03();

	return 0;
}