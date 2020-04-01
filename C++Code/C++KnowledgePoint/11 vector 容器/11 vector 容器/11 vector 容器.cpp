#include<iostream>
#include<vector>
using namespace std;

void printfV(vector<int> &v){
	for (int i = 0; i < v.size(); i++){
		cout << v[i]<< " ";
	}
	cout << endl;
}
int main(){
	//vector �����ֳ�ʼ������
	vector<int> v1;
	vector<int> v2(v1);
	vector<int> v3(3, 6);
	vector<int> v4(8);
	//vector ��������ѹ��Ԫ��
	v1.push_back(1);
	v1.push_back(9);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	//���õ���������vector�е�Ԫ�� 
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	//���õ������������
	for (vector<int>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); rit++){
		cout << *rit << " ";
	}
	cout << endl;
	//��vector�в���Ԫ��
	v1.insert(v1.begin()+1, 66);
	v1.insert(v1.begin(), 3, 17);
	v1.insert(v1.begin(), v3.begin(), v3.end());
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	//vector �����Ĵ�С
	cout << "length:" << v1.size() << endl;
	//vector ��������βԪ��
	cout << "��Ԫ�أ�" << v1.front() << endl;
	cout << "βԪ�أ�" << v1.back() << endl;
	//vector ɾ��β��Ԫ��
	v1.pop_back();
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	//vector�ı��� ͨ������ķ�ʽ 
	printfV(v1);
	
	return 0;
}