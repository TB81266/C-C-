#include<iostream>
#include"algorithm"
#include"vector"
#include"string"
#include"set"
#include"functional"
#include"list"
using namespace std;


//plus<int> Ԥ����õĺ������� ��ʵ�ֲ�ͬ���͵ļӷ�����
//ʵ�����������ͺ��㷨�ķ��� -��ͨ����������ļ���ʵ�ֵ�
//˼������ô��֪����plus<type> �����������ģ� ����Ӧ��׷��Դ��
void main51(){
	plus<int> intAdd;
	int x = 10;
	int y = 20;
	int z = intAdd(x, y);
	cout << "z = " << z << endl;

	plus<string> stringAdd;
	string s1 = "aaa";
	string s2 = " bbb";
	string s3 = stringAdd(s1, s2);
	cout << "s3 = " << s3 << endl;

	vector<string> v1;
	v1.push_back("bbb");
	v1.push_back("aaa");
	v1.push_back("ccc");
	v1.push_back("ddd");
	sort(v1.begin(), v1.end(), greater<string>());
	for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++){
		cout << *it << endl;
	}
	//��ccc���ַָ���
	string sc= "ccc";
	//equal_to<string>()���������� left�������������� right��������sc 
	//bind2nd ����������,�����ǰ�Ԥ���庯������͵ڶ���������
	int num = count_if(v1.begin(), v1.end(), bind2nd(equal_to<string>(), sc));
	cout << "num = " << num << endl;
}


class IsGreat{
public: 
	IsGreat(int i){
		m_num = i;
	}
	bool operator()(int &num){
		if (num > m_num){
			return true;
		}
		else{
			return false;
		}
	}
private:
	int m_num;
};
//�����������ۺϰ���
void main52(){
	vector<int> v1;
	for (int i = 0; i < 10; i++){
		v1.push_back(i+1);
	}
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	//�����3 �ĸ���
	int num1 = count(v1.begin(), v1.end(), 3);
	cout << "num1:" << num1 << endl;
	//ͨ��ν�������2 �ĸ���
	int num2 = count_if(v1.begin(), v1.end(), IsGreat(2));
	cout << "num2:" << num2 << endl;

	//ͨ��Ԥ����ĺ������������2�ĸ���
	//great<int>() ���������� ���������������Ԫ�أ��Ҳ����̶���2����ͨ��bind2nd���ģ� 
	int num3 = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(),2));
	cout << "num3= " << num3 << endl;

	//�������ĸ��� bind2nd(modulus<int>(), 2)
	int num4 = count_if(v1.begin(), v1.end(), bind2nd(modulus<int>(), 2));
	cout << "����num4= " << num4 << endl;

	//��ż���ĸ��� 
	int num5= count_if(v1.begin(), v1.end(), not1(bind2nd(modulus<int>(), 2)));
	cout << "ż��num5= " << num5 << endl;
}
int main(){
	//main51();
	main52();

	return 0;
}