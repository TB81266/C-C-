#include<iostream>
#define  D_SCL_SECURE_NO_WARNINGS
#include"string"
#include"algorithm"
using namespace std;

//void stringofuse01(){
//	string s1 = "shangxiaofeng";
//	string s2 = "shixuanyu";
//	string s3 = s2; //ͨ���������캯�� ����ʼ������s3
//	string s4(10, 'a');//��ʾ10����a'
//	cout << "s1= " << s1 << endl;
//	cout << "s2= " << s2 << endl;
//	cout << "s3= " << s3 << endl;
//	cout << "s4= " << s4 << endl;
//}
////string�ı���
//
//void stringofuse02(){
//	string s1 = "shangxiaofeng";
//	//�������
//	for (int i = 0; i < s1.length(); i++){
//		cout << "s1[i]= " << s1[i] << " ";
//	}
//	cout << endl;
//	//������ ����
//	for (string::iterator it = s1.begin(); it != s1.end(); it++){
//		cout << "*iT=" << *it << " ";
//	}
//	cout << endl;
//	try{
//		for (int i = 0; i < s1.length()+3; i++){
//			cout << s1.at(i) << " ";//�׳��쳣
//		}
//	}
//	catch (...){
//		cout << "�����쳣��" << endl;
//	}
//	cout << endl;
//}
//
////�ַ�ָ���string��ת��
//void stringofuse03(){
//	string s1 = "shangxiaofeng";
//	//s1--->char*
//	cout << s1.c_str() << endl;//����c_str���������������ڴ���׵�ַ
//	//char* --->string
//
//	//s1�����ݿ�����buf��,��buf��ָ����ڴ�ռ俽������
//	char buf[128];
//	s1.copy(buf, 3, 0);//��0��ʼֻ����3���ַ���
//	cout << buf << endl;
//}

//�ַ����� +����
void stringofuse04(){
	string s1 = "shangxiaofeng";
	string s2 = "shixuanyu";
	s1 = s1 + s2;
	cout << s1 << endl;
	string s3 = "xiaoxiao";
	string s4 = "xuanyu";
	s3.append(s4);
	cout << "s3 = " << s3 << endl;
}

//�ַ����Ĳ��Һ��滻
void stringofuse05(){
	string s1 = "i am a good people,yes good sure good!";
	int index = s1.find("good", 0);//λ���±��0��ʼ������good �ַ��� s1.find("good",0);
	cout << "index= " << index << endl;
	//����1 ����good �ĳ��ִ��� �ͳ��ֵ��±� �����ַ����Ĳ���
	int offindex = s1.find("good ",0);
	while (offindex != string::npos){
		cout << "offindex:" << offindex << endl;
		offindex = offindex + 1;
		offindex = s1.find("good", offindex);
	}
	cout << "s1 = " << s1 << endl;
	//����2 ��Сд��good�������滻��GOOD
	int offindex02 = s1.find("good ", 0);
	while (offindex02 != string::npos){
		cout << "offindex02:" << offindex02 << endl;
		s1.replace(offindex02, 3, "GOOD");//��good ɾ������GOOD�滻 ���ú���replace

		offindex02 = offindex02 + 1;
		offindex02 = s1.find("good", offindex02);
	}
	cout << "s1�滻��Ľ����" << s1 << endl;

	string s3 = "shanGxiaofengshangshang";
	s3.replace(0, 3, "SHA");//��0��ʼ��3���ַ�������SHA  �����ַ������滻  
	cout << "s3= " << s3 << endl;
} 

//�ضϣ������ɾ���Ͳ��룩
void stringofuse06(){
	//��Ҫɾ���ַ����е�l
	string s1 = "hello01 hello02 hello03 world!";
	string::iterator it = find(s1.begin(), s1.end(), 'l');//ͨ��find�㷨 ɨ������ֶδ� ���ص�����
	if (it != s1.end()){
		s1.erase(it);
	}
	cout << "ɾ����Ľ����" << s1 << endl;

	//ͷ�巨
	s1.insert(0, "SSS");
	cout << "s1 ����֮��" << s1 << endl;
	//β�巨
	s1.insert(s1.length(), "ccc");
	cout << "s1β�巨�Ľ��Ϊ��" << s1 << endl;
	cout << "s1 �ĳ���Ϊ��" << s1.length() << endl;
	s1.erase(s1.begin(), s1.end());
	cout << "s1 ȫ��ɾ����Ϊ�� " << s1 << endl;
	cout << "s1 �ĳ���Ϊ��" << s1.length() << endl;
}

//ͨ��transform �仯��Сд ���£�
void stringofuse07(){
	string s1 = "AAAAbbbb";
	//1����������ڵ�ַ 2�������� 3 Ԥ����ĺ�������
	transform(s1.begin(), s1.end(),s1.begin(),toupper);
	cout << "s1 = " << s1 << endl;

	string s2 = "AAAbbb";
	transform(s2.begin(), s2.end(),s2.begin(),tolower);
	cout << "s2 =" << s2 << endl;
	


}

int main(){

	//stringofuse01();
	//stringofuse02();
	//stringofuse03();
	//stringofuse04();
	stringofuse05();
	//stringofuse06();
	//stringofuse07();
	return 0;
}