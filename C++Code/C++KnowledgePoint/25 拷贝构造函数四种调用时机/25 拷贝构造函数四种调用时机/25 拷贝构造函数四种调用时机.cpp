#include "iostream"
using namespace std;

//class First{
//public:
//	//�޲ι��캯�� Ĭ�Ϲ��캯��
//	First() {
//		m_a = 0;
//		cout << "���ǹ��캯�����Զ���������" << endl;
//	}
//	//�вι��캯�� Ĭ�Ϲ��캯��
//	First(int a) {
//		m_a = a;
//	}
//	First(const First &obj2){
//		cout << "��Ҳ�ǹ��캯��������ͨ������һ������obj2������ʼ�����Լ�" << endl;
//		m_a = obj2.m_a + 10;
//	}
//	~First(){
//		cout << "���������������Զ���������" << endl;
//	}
//	void getA(){
//		printf("a:%d \n", m_a);
//	}
//protected:
//private:
//	int m_a;
//};
//
////����һ������ʵ�ֵ�һ�ֵ��÷���
//void ObjPlay01(){
//	First a1; //��������'
//	a1.getA();
//	//�ö���1 ��ʼ�� ����2 
//	First a2 = a1; //�����������ʼ�� //��ʼ����
//	a2.getA();
//	a2 = a1; //��a1��=�Ÿ�a2 �������������ṩ��ǳcopy
//}
//int main(){
//	ObjPlay01();
//	return 0;
//}




//class Second{
//public:
//	//�޲ι��캯�� Ĭ�Ϲ��캯��
//	Second() {
//		m_b = 0;
//		cout << "���ǹ��캯�����Զ���������" << endl;
//	}
//	//�вι��캯�� Ĭ�Ϲ��캯��
//	Second(int b) {
//		m_b = b;
//	}
//	Second(const Second &obj2){
//		cout << "��Ҳ�ǹ��캯��������ͨ������һ������obj2������ʼ�����Լ�" << endl;
//		m_b = obj2.m_b + 10;
//	}
//	~Second(){
//		cout << "���������������Զ���������" << endl;
//	}
//	void getB(){
//		printf("b:%d \n", m_b);
//	}
//protected:
//private:
//	int m_b;
//};
//
////����һ������ʵ�ֵڶ��ֵ��÷���
//void ObjPlay02(){
//	Second b1(20); //��������
//	//��ֵ���캯���ĵ�һ��Ӧ�ó���
//	//�ö���1 ��ʼ�� ����2 
//	Second b2(b1); //�����������ʼ�� //���ŷ�
//	//a2 = a1; //��a1��=�Ÿ�a2 �������������ṩ��ǳcopy
//	b2.getB();
//}
//int main(){
//	ObjPlay02();
//	return 0;
//}


//
////������Ӧ�ó���
//class Third {
//public:
//	Third(int xx = 0, int yy = 0) {
//		X = xx;
//		Y = yy;
//		cout << "Constructor Object.\n";
//	}
//	//���ƹ��캯��
//	Third(const Third & p){
//		X = p.X; 
//		Y = p.Y;
//		cout << "Copy_constructor called." << endl;
//	}
//	~Third() {
//		cout << X << "," << Y << " Object destroyed." << endl;
//	}
//	int  GetX() {
//		return X;
//	}
//	int GetY() {
//		return Y;
//	}
//private:
//	int  X, Y;
//};
//
//void f(Third  p)   {
//	cout << "Funtion:" << p.GetX() << "," << p.GetY() << endl;
//}
//
//void objplay03(){
//	Third A(1, 2);  //�β���һ��Ԫ�أ��������ã���ִ��ʵ�α�����ʼ���βα���
//	f(A);
//}
//
//int main(){
//	objplay03();
//	return 0;
//}


//������Ӧ�ó���
class Forth {
public:
	Forth(int xx = 0, int yy = 0) {
		X = xx;  Y = yy;
		cout << "Constructor Object.\n";
	}
	//��ֵ���캯��
	Forth(const Forth & p) 	    {
		X = p.X;  Y = p.Y;
		cout << "Copy_constructor called." << endl;
	}
	~Forth(){
		cout << X << "," << Y << " Object destroyed." << endl;
	}
	int  GetX() {
		return X;
	}
	int GetY() {
		return Y;
	}
private:
	int  X, Y;
};

void f(Forth  p)   {
	cout << "Funtion:" << p.GetX() << "," << p.GetY() << endl;
}

Forth g(){
	Forth A(1, 2);
	return A;
}
//�����ʼ������ �� ��=���ȺŲ��� ��������ͬ�ĸ���
//���������ȥ�������ؼ���������ʱ��ν�
void mainobjplay(){
	//�����ص��������󣬸�ֵ������һ��ͬ���͵Ķ�����ô��������ᱻ����
	//Forth B;
	//B = g();  //���������� ��ֵ ��B����Ȼ��������������

	//�����ص�������������ʼ������һ��ͬ���͵Ķ�����ô���������ֱ��ת���µĶ���
	Forth B = g();
	cout << "����ɨ��ɮ����" << endl;
}

int main(){
	mainobjplay();
	return 0;
}
