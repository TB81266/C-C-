#include<iostream>
using namespace std;
struct Teacher{
	char name[64];
	int age;
};

int test01(const Teacher *pT){
	//pT->age = 10;// error //ָ����ָ����ڴ�ռ�,���ܱ��޸�
	return pT->age;
}

int test02(Teacher * const pT)
{
	pT->age = 10;//ָ����ָ��ĵ�ַ�����޸ģ��ڴ�ռ��ǿ����޸ĵ�
	//pT = NULL; // ERROR
	return 0;
}

int test03(const Teacher *const pT){
	//pT->age = 10;// error ָ����ָ��ĵ�ַ�����޸ģ��ڴ�ռ��ǿ����޸ĵ�
	//pT = NULL;// ERROR
	return 0;
}

int main(){
	Teacher t1;
	t1.age = 28;
	test01(&t1);
	test02(&t1);
	test03(&t1);

	const int a = 90;
	// a = 89;//error  const ���εı��� ���ݲ��ɱ�
	int *p = NULL;
	p = (int *)&a;
	*p = 20;  //��Ӹ�ֵ 
	return 0;
}