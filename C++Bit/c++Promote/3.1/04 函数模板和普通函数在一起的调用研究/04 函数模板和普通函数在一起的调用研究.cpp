#include<iostream>
using namespace std;
//����ģ�岻�����Զ�����ת��
//��ͨ�����ܹ��Զ�����ת��

/*
1������ģ���������ͨ����һ��������
2��c++���������ȿ�����ͨ����
3���������ģ����Բ���һ�����õ�ƥ�䡢��ôѡ��ģ��
4������ͨ��ģ��ʵ���б���﷨�޶�������ֻͨ��ģ��ƥ��
*/

int Max(int a, int b){
	cout << "int Max(int a,int b)" << endl;
	return a > b ? a : b;
}
template <typename T>
T Max(T a, T b){
	cout << "T Max(T a, T b)" << endl;
	return a > b ? a : b; 
}

template <typename T>
T Max(T a,T b, T c){
	cout << "T Max(T a, T b,T c)" << endl;
	return Max (Max(a,b),c);
}

 int main(){
	int a = 1;
	int b = 2;

	cout << Max(a, b) << endl;//������ģ�����ͨ���������ϵ��õ�ʱ������ѡ����ͨ����
	cout << Max<>(a, b) << endl;//����ʾ��ʹ�ú���ģ�壬��ʹ��<>�����б�
	cout << Max(3.0, 4.0) << endl;//��� ����ģ��������õ�ƥ�䣬 ʹ�ú���ģ��
	cout << Max(5.0, 6.0, 7.0) << endl;//����
	cout << Max('a', 100) << endl;//����ģ���޷��������͵�Ҫ���������ͨ������������ʽ����ת��
	return 0;
}