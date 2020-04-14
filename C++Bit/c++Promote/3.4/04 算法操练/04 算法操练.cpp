#include<iostream>
#include"algorithm"
#include"vector"
#include"string"
#include"set"
#include"functional"
#include"list"
using namespace std;
//��������ĸ�����غ������ò��������࣬����󳣳�Ϊ��������
//�������˺������õĲ��������� ���Ǻ�������
template <typename T>
class ShowElemt{
public:
	ShowElemt(){
		n = 0;
	}
	void  operator()(T &t){
		n++;
		cout << t << endl;
	}
	void printN(){
		cout << "n:" << n << endl;
	}
protected:
private:
	int n;
};

//�����������ͨ����������
//����ģ��
template <typename T>
void ShowfuncElemt01(T &t){
	cout << t << endl;
}

//��ͨ����
void ShowfuncElemt02(int &t){
	cout << t << endl;
}

void main41(){
	int a = 90;
	ShowElemt<int> showelemt;
	showelemt(a);
	ShowfuncElemt01<int>(a);
	ShowfuncElemt02(a);
}

//��������ĺô�
void main42(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3); 
	v1.push_back(5);
	//������������ �����º���
	for_each(v1.begin(), v1.end(), ShowElemt<int>());
	//������ͨ�������ص��������ص�����ʵ��������ı༭�ߺ�ʹ���ߵķ��룬˭����for_each()�����������д����ص���������ڵ�ַ
	for_each(v1.begin(), v1.end(), ShowfuncElemt02);
	ShowElemt<int> show1;
	//for_each�㷨�ĺ�������Ĵ��� ��Ԫ��ֵ���ݣ��������ô���
	for_each(v1.begin(), v1.end(), show1);
	show1.printN();
	cout << "ͨ��for_each�㷨�ķ���ֵ�����õĴ�����" << endl;
	show1 = for_each(v1.begin(), v1.end(), show1);
	show1.printN();
}

template <typename T>
class IsDiv{
public:
	IsDiv(const T &divisor){
		this->divisor = divisor;
	}
	bool operator()(T& t){
		return  (t%divisor == 0);
	}
protected:
private:
	T divisor;
};

//һԪ���������һԪ����ν��
void main43(){
	vector<int> v2;
	for (int i = 10; i < 33; i++){
		v2.push_back(i);
	}
	int a = 4;
	IsDiv<int> myDiv(a);
	find_if(v2.begin(), v2.end(), myDiv);
	vector<int>::iterator it;
	it = find_if(v2.begin(), v2.end(), IsDiv<int>(a));
	if (it == v2.end()){
		cout << "������û��ֵ��4 ��Ԫ��!" << endl;
	}
	else{
		cout << "��һ���Ǳ�4������Ԫ�� " << *it << endl;
	}

}

template <typename T>
class SumAdd{
public:
	T operator() (T t1,T t2){
		return t1 + t2;
	}
protected:
private:
};
//��Ԫ��������Ͷ�Ԫ����ν��
void main45(){
	//v3 = v1+v2 
	vector<int> v1, v2;
	vector<int> v3;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);

	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(6);

	v3.resize(10);
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), SumAdd<int>());
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++){
		cout << *it <<" "; 
	}
	cout << endl;
}

bool MyCompare(const int&a,const int& b){
	return a < b;
}
//��Ԫν��
void main46(){
	vector<int> v1(10);
	for (int i = 0; i < 10; i++){
		int tmp = rand() % 100;
		v1[i] = tmp;
	}
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	//����������� ͨ���㷨����
	for_each(v1.begin(), v1.end(), ShowfuncElemt02);
	cout << endl;

	sort(v1.begin(), v1.end(), MyCompare);
	for_each(v1.begin(), v1.end(), ShowfuncElemt02);
	cout << endl;

}
struct CompareNoCase{
	bool operator()(const string &str1, const string &str2){
		string str1_;
		str1_.resize(str1.size());
		transform(str1.begin(),str1.end(),str1_.begin(),tolower);//���庯������

		string str2_;
		str2_.resize(str2.size());
		transform(str2.begin(), str2.end(), str2_.begin(), tolower);//���庯������
		return (str1_ < str2_);//��С�����������
	}
};
void main47(){
	set<string> set1;
	set1.insert("aaa");
	set1.insert("bbb");
	set1.insert("ccc");
	set<string>::iterator it2 = set1.find("aaa");//find����Ĭ������������ִ�Сд��
	if (it2 == set1.end()){
		cout << "û�в��ҵ�aaa" << endl;
	}
	else{
		cout << "�����ִ�Сд�Ĳ鵽aaa" << endl;
	}
	set<string, CompareNoCase> set2;
	set2.insert("bbbb");
	set2.insert("cccc");
	set2.insert("dddd");
	set2.insert("aAa");
	set<string, CompareNoCase>::iterator it = set2.find("aAa");
}
//���������������������ͻ�ƺ����ĸ��� �ܱ��� ����״̬��Ϣ
int main(){
	//main41();//��������ģ�����ִ�� ����һ������  Ҳ��Ϊ�º���
	//main42();
	//main43();//һԪν��
	//main45();
	//main46();
	main47();
	return 0;
}