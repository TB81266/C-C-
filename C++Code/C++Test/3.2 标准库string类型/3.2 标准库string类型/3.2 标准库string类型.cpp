
#include<iostream>
#include<string>
using namespace std;


int main01(){
	int n = 9;
	string s2("shangxiaofeng");
	string m(n, 'a');//��ʼ��Ϊn����a'
	string s1(s2); //��s1��ʼ��Ϊs2��һ������
	string s3;//s3��һ���յ��ַ���
	return 0;
}

int main02(){
	string world;
	while (cin >> world){
		cout << world << endl;
	}
	return 0;
}

int main(){
	string line;
	while (getline(cin,line)){
		cout << line << endl;
	}
	return 0;
}