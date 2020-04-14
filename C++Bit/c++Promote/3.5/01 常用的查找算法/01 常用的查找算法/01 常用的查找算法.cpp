#include<iostream>
#include"algorithm"
#include"vector"
#include"string"
#include"set"
#include"functional"
#include"list"
#include<numeric>
//#pragma warning(disable : 4996)
//#define _SCL_SECURE_NO_WARNINGS
using namespace std;

void printT(vector<int> &v){
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}


class Student{
public:
	Student(string name,int id){
		m_name = name;
		m_id = id;
	}
	void printT(){
		cout << "name:" << m_name << endl;
		cout << "id:" << m_id << endl;
	}
public:
	string m_name;
	int m_id;
protected:
private:	
};

//����Ԫ�صĲ���
void main01_adjacent_find(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(2);

	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	vector<int>::iterator it = (v1.begin(), v1.end());//���ҵ�һ��Ԫ���ظ���λ��
	if (it == v1.end()){
		cout << "û���ҵ��ظ���Ԫ�أ�" << endl;
	}
	else{
		cout << *it << endl;
	}
	//��������±��λ��
	int index = distance(v1.begin(), it);
	cout << index << endl;
}
//�����Ʋ���
void main02_binary_search(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	bool b = binary_search(v1.begin(),v1.end(),7);
	if (b == true){
		cout << "�ҵ���"<<endl;
	}
	else{
		cout << "û�ҵ�" << endl;
	}
}

void main03_count(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7); 
	int num = count(v1.begin(),v1.end(),7);
		cout << "num:" << num<<endl;
}

//������㷨merge
void main04_merge(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);

	vector<int> v2;
	v2.push_back(1);
	v2.push_back(3);
	v2.push_back(5);

	vector<int> v3;
	v3.resize(v1.size()+v2.size()); //����3�Ĵ�С
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	printT(v3);

}

bool CompareS(Student& s1,Student& s2){
	return (s1.m_id < s2.m_id);
}
void main05_sort(){
	Student s1("�ϴ�",1);
	Student s2("�϶�", 2);
	Student s3("����", 3);
	Student s4("����", 4);
	vector<Student> v1;
	v1.push_back(s4);
	v1.push_back(s1);
	v1.push_back(s2);
	v1.push_back(s3);
	for (vector<Student>::iterator it = v1.begin(); it != v1.end(); it++){
		it->printT();
	}
	//sort �����Զ��庯������ �����Զ����������͵�����
	//�滻�㷨��ͳһ�ԣ�ʵ�ֵ��㷨���������͵ķ��룩
	sort(v1.begin(), v1.end(), CompareS);
}
//���������㷨
void main06_random_shuffle(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	random_shuffle(v1.begin(), v1.end());
	printT(v1);
	string  str = "shanxiaofeng";
	random_shuffle(str.begin(), str.end());
	cout << "str:" << str << endl;
}

//������㷨
void main07_reverse(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	reverse(v1.begin(), v1.end());
	printT(v1);
}

//void main08_copy(){
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(3);
//	v1.push_back(5);
//	v1.push_back(7);
//	vector<int> v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2);
//	printT(v2);
//}

bool great_equal_5(int &n){
	if (n >= 5){
		return true;
	}
	return false; 
}
void main09_replace_replace_if(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(3);
	replace(v1.begin(), v1.end(), 3, 8);//�������3  �滻��8
	printT(v1);
	//�Ѵ��ڵ���5�ı��1 
	replace_if(v1.begin(), v1.end(), great_equal_5, 1);
	printT(v1);
}

void main10_swap(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(3);

	vector<int> v2;
	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(6);
	v2.push_back(8);
	v2.push_back(10);
	swap(v1, v2);//��v1�滻��v2
	printT(v1);

}

void main11_accumulate(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(3);
	int tmp = accumulate(v1.begin(), v1.end(),100); //accumulate �� #include"numeric"��ͷ�ļ���
	cout << tmp << endl;
}

void main12_fill(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(3);
	fill(v1.begin(), v1.end(), 8);
	printT(v1);
}

void main13_union(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(3);

	vector<int> v2;
	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(6);
	v2.push_back(8);
	v2.push_back(10);

	vector<int> v3;
	v3.resize(v1.size() + v2.size());
	//set_union(v1.begin(), v1.end(), v2.begin(), v2.end(),v3.begin());
	printT(v3);
}
int main(){
	//main01_adjacent_find();
	//main02_binary_search();
	//main03_count();
	//main04_merge();
	//main05_sort();
	//main06_random_shuffle();
	//main07_reverse();
	//main08_copy();
	//main09_replace_replace_if();
	//main10_swap();
	//main11_accumulate();
	//main12_fill();
	main13_union();



	return 0;
}