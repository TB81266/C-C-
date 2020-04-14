#include<iostream>
#include<map>
#include"string"
using namespace std;

//map Ԫ�ص����  ɾ�� ����

void MapUse01(){
	map<int, string> m1;
	//mapԪ�ص����
	//����1������ֵ�Եķ�ʽ���
	m1.insert(pair<int,string>(1,"Teacher01"));
	m1.insert(pair<int, string>(2, "Teacher02"));
	m1.insert(pair<int, string>(3, "Teacher03"));
	//����2��
	m1.insert(make_pair(4, "Teacher04"));
	m1.insert(make_pair(5, "Teacher05"));
	//����3��
	m1.insert(map<int, string>::value_type(6, "Teacher06"));
	//����4��
	m1[7] = "Teacher07";
	m1[8] = "Teacher08";

	//mapԪ�صı���
	for (map<int, string>::iterator it = m1.begin(); it != m1.end(); it++){
		cout << it->first << "\t" << it->second << endl;
	}
	cout << "��������" << endl;
	//������ɾ��,����ͽ��ɾ��
	while (!m1.empty()){
		map<int, string>::iterator it = m1.begin();
		cout << it->first << "\t" << it->second << endl;
		m1.erase(it);
	}
}


//���ֲ��뷽������ͬ
//ǰ���ַ������ص���pair<iterator,bool> ����<��������λ�ã����> ��key���ڣ��򱨴�
//��ͨ������4 ��key��ͬ�Ѿ����ڣ����޸�value��ֵ
void MapUse02(){
	map<int, string> m1;
	//mapԪ�ص����
	//����1������ֵ�Եķ�ʽ���
	pair<map<int,string>::iterator,bool>  mypair01 = m1.insert(pair<int, string>(1, "Teacher01"));
	m1.insert(pair<int, string>(2, "Teacher02"));
	m1.insert(pair<int, string>(3, "Teacher03"));
	//����2��
	pair<map<int, string>::iterator, bool>  mypair04 =  m1.insert(make_pair(4, "Teacher04"));
	m1.insert(make_pair(5, "Teacher05"));
	//����3��
	pair<map<int, string>::iterator, bool>  mypair06 =  m1.insert(map<int, string>::value_type(6, "Teacher06"));
	//����4��
	m1[7] = "Teacher07";
	m1[8] = "Teacher08";

	//mapԪ�صı���
	for (map<int, string>::iterator it = m1.begin(); it != m1.end(); it++){
		cout << it->first << "\t" << it->second << endl;
	}
	cout << "��������" << endl;
	//����ж������Ƿ�ɹ���?
	pair<map<int, string>::iterator, bool>  mypair07 = m1.insert(map<int, string>::value_type(7, "Teacher07"));
	if (mypair07.second != true){
		cout << "����ʧ�ܣ�" << endl;
	}
	else{
		cout << mypair07.first->first << "\t" << mypair07.first->second << endl;
	}		
}

void MapUse03(){
	map<int, string> m1;
	//mapԪ�ص����
	//����1������ֵ�Եķ�ʽ���
	pair<map<int, string>::iterator, bool>  mypair01 = m1.insert(pair<int, string>(1, "Teacher01"));
	m1.insert(pair<int, string>(2, "Teacher02"));
	m1.insert(pair<int, string>(3, "Teacher03"));
	//����2��
	pair<map<int, string>::iterator, bool>  mypair04 = m1.insert(make_pair(4, "Teacher04"));
	m1.insert(make_pair(5, "Teacher05"));
	//����3��
	pair<map<int, string>::iterator, bool>  mypair06 = m1.insert(map<int, string>::value_type(6, "Teacher06"));
	//����4��
	m1[7] = "Teacher07";
	m1[8] = "Teacher08";

	//mapԪ�صı���
	for (map<int, string>::iterator it = m1.begin(); it != m1.end(); it++){
		cout << it->first << "\t" << it->second << endl;
	}
	cout << "��������" << endl;
	//map�Ĳ���
	map<int, string>::iterator it01 = m1.find(100); 

	//����жϲ��ҵĳɹ����,Ҳ�����쳣�Ĵ���
	if (it01 == m1.end()){
		cout << "keyֵ100 �����ڣ�" << endl;
	}
	else{
		cout << it01->first << "\t" << it01->second << endl;
	}

	//map��equal_range
	pair<map<int,string>::iterator,map<int,string>::iterator> mypair = m1.equal_range(5);//�������������� �γ�һ��pair
	//��һ���������Ǵ��ڵ���5��λ��
	//�ڶ����������Ǵ���5��λ��
	//��ȡ���
	if (mypair.first == m1.end()){
		cout << "��һ�����ڵ���5 ��λ�ò����ڣ�" << endl;
	}
	else{
		cout << mypair.first->first << "\t" << mypair.first->second << endl;
	}
	//ʹ�õڶ���������
	if (mypair.second == m1.end()){
		cout << "��һ������5 ��λ�ò����ڣ�" << endl;
	}
	else{
		cout << mypair.second->first << "\t" << mypair.second->second << endl;
	}

}
int main(){
	//MapUse01();
	//MapUse02();
	MapUse03();
	return 0;
}