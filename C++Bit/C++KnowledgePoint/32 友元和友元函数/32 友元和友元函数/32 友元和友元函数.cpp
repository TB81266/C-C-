#include<iostream>
using namespace std;
//������������һ��֧��������ڲ�������Ԫ  һ�������������ⲿ�������� Ȼ����������
//��Ԫ���ǳ�Ա û��thisָ�� ���Ҳ����ʹ��const

/*
��Ԫ�����ɷ������˽�кͱ�����Ա����������ĳ�Ա����
��Ԫ����������const����
��Ԫ�����������ඨ����κεط�����������������޶�������
һ�����������Ƕ�������Ԫ����
��Ԫ�����ĵ�������ͨ�����ĵ��ú�ԭ����ͬ

*/
class Goods;
void playBasketball(const Goods & pBall);

class Goods{
public:
	friend void playBasketball(const Goods & pBall);//��Ԫ���������� ���Է������˽������
	friend class Business;
	Goods(const char* name,float price){
		m_len = strlen(name);
		m_name = new char[m_len + 1];
		m_price = price;		
	}
	~Goods(){
		if (m_name != NULL){
			delete[] m_name;
			m_name = NULL;
			m_price = 0;
			m_len = 0;
		}
	}
public:
	float getPrice(){
		return m_price;
	}
private:
	char * m_name;
	float m_price;
	int m_len;
};

class Business{
public:
	Business(const char *name, int count){
		_len = strlen(name);
		_name = new char[_len + 1];
		strcpy(_name, name);
		_count = count;
	}
	~Business(){
		if (_name != NULL){
			delete[] _name;
			_name = NULL;
			_count = 0;
			_len = 0;
		}
	}
public:
	//��Business�����з��� Goods �ĳ�Ա�����ͳ�Ա���� ��������Ԫ�ࣨ��Business����ΪGoods����Ԫ�ࣩ
	void BuyBall( Goods& pBall){
		float BuyPrice = pBall.getPrice();
		cout << "�̼ҵļ۸�" << BuyPrice << endl;
	}
private:
	char* _name;
	int _len;
	int _count;
};


void playBasketball(const Goods & pBall){
	float PlaBasketballOfprice = pBall.m_price;//����ֱ�ӷ���˽������
	cout << "����ļ۸�" << PlaBasketballOfprice << endl;
}

int main(){
	Goods Ball("basketball", 360);
	playBasketball(Ball);	
	cout << "�۸�" << Ball.getPrice() << endl;
	Business BaiDu("HR", 400);
	BaiDu.BuyBall(Ball);
	
	return 0;
}