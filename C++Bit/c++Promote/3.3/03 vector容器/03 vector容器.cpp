#include<iostream>
#include"vector"
using namespace std;

//����Ԫ�ص��� β ɾ�� �����
void VectorOfUse01(){
	vector<int> v1;
	cout << "V1�ĳ��ȣ�" << v1.size() << endl;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	cout << "V1�ĳ��ȣ�" << v1.size() << endl;
	//��ȡͷ������β����Ԫ��
	cout << "ͷ��Ԫ�أ�" << v1.front() << endl;
	cout << "β��Ԫ�أ�" << v1.size() << endl;

	//�޸�ͷ��Ԫ�ص�ֵ
	v1.front() = 11;//front������� ���ص���һ������ �ǿ��Ե���ֵ�� �ʣ���������ֵҪ����ֵ��Ӧ����һ������
	v1.back() = 99;



	while (v1.size() > 0){
		v1.back();//��ȡβ����Ԫ��
		cout << "v1.back() = " << v1.back() << endl;
		v1.pop_back();//ɾ��β����Ԫ��

	}
}

//vector�ĳ�ʼ��
void VectorOfUse02(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	vector<int> v2 = v1;//�����ʼ��
	vector<int> v3(v1.begin(), v1.begin() + 2);//�����ʼ�� 
}

//vector�ı���
void VectorOfUse03(){
	//ִ��ǰ����Ҫȷ���ڴ�Ĵ�С ��Ϊ�� v1��10��
	vector<int> v1(10);
	for (int i = 0; i < 10; i++){
		v1[i] = i + 1;
	}

	for (int i = 0; i < 10; i++){
		cout << v1[i] << " ";
	}
	cout << endl;
}

void printV(vector<int>& v){
	for (int i = 0; i < v.size(); i++){
		cout  << v[i] << " ";
	}
	cout << endl;

}
//push_back��ǿ������
void VectorOfUse04(){
	vector<int> v1(10);
	v1.push_back(10);
	v1.push_back(100);//����ӵ�β��
	cout << "v1�ĳ��ȣ�" << v1.size() << endl;
	printV(v1);
}

//ͨ���������ķ�ʽ ����vector
void VectorOfUse05(){
	vector<int> v1(10);
	for (int i = 0; i < 10; i++){
		v1[i] = i + 1;
	} 
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	//����ı���
	for (vector<int>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); rit++){
		cout << *rit << " ";
	}
	cout << endl;
}

//vector��ɾ������
void VectorOfUse06(){
	vector<int> v1(10);
	for (int i = 0; i < 10; i++){
		v1[i] = i + 1;
	}
	//����ɾ��
	v1.erase(v1.begin(), v1.begin() + 3);
	printV(v1); 
	//ָ��λ��ɾ��
	v1.erase(v1.begin());//��ͷ��ɾ��Ԫ��
	printV(v1);
	//���ݵ�Ԫ�ص�λ��
	v1[1] = 2;
	v1[3] = 2;
	//ɾ����������е�2
	for (vector<int> ::iterator it = v1.begin(); it != v1.end(); it++){
		if (*it == 2){
			it = v1.erase(it);//������ɾ����ָ���Ԫ�ص�ʱ��eraseɾ����������it�Զ�����
		}
		else{
			it++;
		}
	}
	printV(v1);
	v1.insert(v1.begin(), 100);
	v1.insert(v1.end(), 200);
	v1.insert(v1.begin() + 3, 6666);
	printV(v1);

}
int main(){
	//VectorOfUse01();
	//VectorOfUse02();
	//VectorOfUse03();
	//VectorOfUse04();
	//VectorOfUse05();
	VectorOfUse06();



	return 0;
}