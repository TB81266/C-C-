#include<iostream>
#include"list"
using namespace std;

void ListOfUse01(){
	list<int> l;
	for (int i = 0; i < 10; i++){
		l.push_back(i);//β���뷨 β�巨
	}
	cout << "list�Ĵ�С��" << l.size() << endl;
	//����������
	list<int>::iterator it = l.begin();
	while (it != l.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
	//list�ǲ���������ʵ�
	it = l.begin();
	it++;
	it++;
	it++;
	//it + 5;//error  ��֧������ķ���
	//����100���뵽ʲôλ�� ���ۣ�����Ľڵ�index��ţ��Ǵ�0��λ�ÿ�ʼ�ģ�
	//��3��λ�ò���Ԫ�أ���ԭ����3��λ�ñ��4��λ�ã�ԭ����4��λ�ñ��5��λ�ã�
	l.insert(it, 100);
	for (list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}

void ListOfUse02(){
	list<int> l;
	for (int i = 0; i < 10; i++){
		l.push_back(i);//β���뷨 β�巨
	}
	cout << "list�Ĵ�С��" << l.size() << endl; 
	for (list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	list<int>::iterator it1 = l.begin();
	list<int>::iterator it2 = l.begin();
	it2++;
	it2++;
	it2++;
	l.erase(it1, it2);
	for (list<int>::iterator it = l.begin(); it != l.end(); it++){
		cout << *it << " ";
	}
	cout << endl;


}

int main(){
	//ListOfUse01();
	ListOfUse02();


	return 0; 
}