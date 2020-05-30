#include"class.h"
//Goods() ��������ڲ���ʵ�������� Goods��Goods *const this ��
Goods::Goods(const char* name){
	m_lenght = strlen(name);
	m_name = new char[m_lenght + 1];
	strcpy(m_name, name);
	m_price = 0;
	m_count = 0;
	m_globalPrice = m_count* m_price;
}
Goods::Goods(){
	m_name = new char[1];
	m_name = '\0';
	m_lenght = strlen(m_name);
	m_price = 0;
	m_count = 0;
	m_globalPrice = m_count* m_price;
}
Goods::Goods(const char* name, float price, float count){
	m_lenght = strlen(name);
	m_name = new char[m_lenght + 1];
	strcpy(m_name, name);
	m_price = price;
	m_count = count;
	m_globalPrice = m_count* m_price;
}

float Goods::getPrice(){
	return m_price;
}
float Goods::getGlobalPrice(){
	return m_globalPrice;
}
float Goods::getCount(){
	return m_count;
}

//���
Goods::Goods(const Goods &obj){
	m_name = new char[obj.m_lenght+ 1];
	strcpy(m_name, obj.m_name);
	m_count = obj.m_count;
	m_price = obj.m_price;
	m_globalPrice = obj.m_globalPrice;
	m_lenght = obj.m_lenght;
	
}
Goods& Goods::operator = (const Goods &obj){
	cout << "��ֵ���������أ�" << endl;
	//�����ǰ��ָ�벻���� obj ������ֵ
	//�жϵ�ǰ�����Ƿ��Ǹ��Լ���ֵ
	//��һ���ͷžɵ��ڴ�ռ� Ball03
	if (this->m_name != nullptr){
		delete[] m_name;
		m_name = nullptr;	
	}

	//�ڶ��� ����Ball01�����ڴ�ռ�
	this->m_lenght = obj.m_lenght;
	this->m_name = new char[m_lenght + 1];
	this->m_count = obj.m_count;
	this->m_price = obj.m_price;
	this->m_globalPrice = obj.m_globalPrice;

	//������ ��Ball01 ��ֵ�� Ball03
	strcpy(m_name, obj.m_name);

	return *this;
}

Goods::~Goods(){
	cout << "����������ʵ�֣�" << endl;
	delete[] m_name;
	m_name = nullptr;
	m_lenght = 0;
	m_count = 0;
	m_globalPrice = 0;
	m_price = 0;
}


void Goods::GoodsShow(){
	cout << "��Ʒ����:" << m_name << ",�۸�:" 
		<< m_price << ",����:" << m_count << ",�ܼۣ�"<<m_globalPrice<<endl;
}

void objPlay(Goods obj){
	cout << "�����ַ�����ʵ�� ,ob�����ʼ�����" << endl;
}

Goods wayFour(){
	cout << "����4��ʵ��" << endl;
	Goods football("BeKeHanMu");
	return football;
}
