#include<iostream>
#include<functional>
#include"queue"

using namespace std;

void PriorityQueue01(){
	priority_queue<int> p1;//Ĭ������������ֵ���ȶ���
	priority_queue<int, vector<int>, less < int >> p2; //��ǰ����õ�Ԥ���庯�� 
	priority_queue<int, vector<int>, greater <int>> p3; //��Сֵ���ȶ���
	p1.push(33);
	p1.push(55);
	p1.push(66);
	p1.push(22);
	cout << "��ͷԪ�أ�" << p1.top() << endl;
	cout << "���еĴ�С:" << p1.size() << endl;
	while (p1.size()>0){
		cout << p1.top() << " ";
		p1.pop();
	}
	cout << endl << endl;
	cout << "������С���ȶ���" << endl;
	p3.push(33);
	p3.push(55);
	p3.push(66);
	p3.push(22);
	cout << "��ͷԪ�أ�" << p3.top() << endl;
	cout << "���еĴ�С:" << p3.size() << endl;
	while (p3.size()>0){
		cout << p3.top() << " ";
		p3.pop();
	}
	cout << endl;

}
int main(){
	PriorityQueue01();


	return 0;
}