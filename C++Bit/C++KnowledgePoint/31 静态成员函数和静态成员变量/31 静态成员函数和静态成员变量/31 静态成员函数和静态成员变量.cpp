#include<iostream>
using namespace std;
/*
1. ��̬��ԱΪ���������������������ĳ�������ʵ��
2. ��̬��Ա�������������ⶨ�壬����ʱ�����static�ؼ���
3. �ྲ̬��Ա����������::��̬��Ա���߶���.��̬��Ա������
4. ��̬��Ա����û�����ص�thisָ�룬���ܷ����κηǾ�̬��Ա
5. ��̬��Ա�������ͨ��Աһ����Ҳ��public��protected��private3�ַ��ʼ���Ҳ���Ծ��з���ֵ

�����⡿
1. ��̬��Ա�������Ե��÷Ǿ�̬��Ա������
2. �Ǿ�̬��Ա�������Ե�����ľ�̬��Ա������


1����̬��Ա�������κζ��� ���Ա��κζ���ʹ�� ����һ�ݿռ�  ��̬��Ա����Ҫ�������� 
2����̬����ֻ�ܷ��ʾ�̬��Ա
3����ͨ��Ա�������Է��ʾ�̬��Ա
4����ͨ�����ǿ��Ե��þ�̬��Ա������
5����̬�ĳ�Ա�����ǲ����Ե�����ͨ������  ��Ϊ��̬����û��thisָ��� ���û��const const ������thisָ���


*/
class Test{
public:
	Test(int x){
		m_x = x;
		cout << "���ǹ��캯����x=" << m_x <<",m_y = "<<m_y<< endl;
	}
	~Test(){
		cout << "������������" << endl;
	}
public:
	int getX(){
		return m_x;
	}
	int getY(){
		return m_y;
	}
	static int getCount(){
		//return getY(); error ��̬�ǲ��ܵ�����ͨ��
		return m_count;
	}
private:
	int m_x;
	static int m_y;
	static int m_count;
};

int Test::m_y = 90;
int Test::m_count = 100;

int main(){
	Test t1(11);
	Test t2(22);
	Test t3(33);
	cout << "t3.M-Y = " << t3.getX() << endl;
	cout << "t3.M-Y = " << t3.getY() << endl;

	return 0;
}