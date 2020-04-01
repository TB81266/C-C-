#include<iostream>
#include"deque"
#include"algorithm";
using namespace std;

void printD(deque<int>& d){
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}
void DequeOfUse01(){
	deque<int> d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	d1.push_front(-1);
	d1.push_front(-2);
	d1.push_front(-3);
	cout << "ͷ��Ԫ�أ�" << d1.front() << endl;
	cout << "β��Ԫ�أ�" << d1.back() << endl;
	printD(d1);
	d1.pop_front();
	d1.pop_back();
	//��������Ԫ���������±� �磺����-1 �������±�
	deque<int>::iterator it = find(d1.begin(), d1.end(), -1);//����һ����������ֵ����Ϊ������±�
	if (it != d1.end()){
		cout << "-1�������±꣺" << distance(d1.begin(), it) << endl;
	}
	else{
		cout << "û���ҵ���" << endl;
	}
	
}
int main(){
	DequeOfUse01();


	return 0;
}