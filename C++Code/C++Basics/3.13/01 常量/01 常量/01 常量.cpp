#include<iostream>
using namespace std;
#define MAX 1000

enum Sex{
	MALE,
	FEMALE,
	SAVE

};
int main(){
	//1������ ��1�����泣�� 300 �ǲ����޸ĵ� 
	//const���εĳ�������const ���β����Ըı�
	const int num = 20;
	//num = 10; error 
	printf("num = %d\n", num);
	//2��#define ����ı�ʶ������
	int a = MAX;
	printf("a = %d\n", a);
	//3��ö�ٳ���
	int  b = 90;
	enum Sex s = MALE;
	printf("%d\n", MALE);



	return 0;
}