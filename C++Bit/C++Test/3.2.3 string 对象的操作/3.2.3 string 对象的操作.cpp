
#include<iostream>
#include<string>
using namespace std;

int main01(){
	/*string line;
	while (getline(cin, line)){
		cout << line << endl;
	}
*/
	string line("shang xiao feng");
	cout << "�������ַ����ĳ���Ϊ��"<<line.size() << endl;
	cout << "size() �� length()������" << line.length() << endl;//����ʵ�ֵĹ�����һ����
	return 0;
}

int main(){
	string s1("shangxiaofeng");
	string s2("shangyafeng");
	if (s1.size() == s2.size()){
		cout << "s1 ��s2 ��ȣ�" << endl;
	}
	else if(s1.size()>s2.size()){
		cout << "s1 ����s2��";
	}
	else{
		cout << "s2����s1��" << endl;
	}
}