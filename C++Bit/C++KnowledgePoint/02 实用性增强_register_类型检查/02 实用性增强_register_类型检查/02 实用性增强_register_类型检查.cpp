//C�����еı�����������������ʼ��λ�ö��壡��
//C++�и�ǿ�����Եġ�ʵ���ԡ������еı�������������Ҫʹ��ʱ�ٶ��塣
//register�ؼ��� ����������ñ���aֱ�ӷ��ڼĴ������棬�ٶȿ�
//C�������޷�ȡ��register������ַ
//��C++����Ȼ֧��register�ؼ���

#include<iostream>
using namespace std;


int main(){
	register int a = 0;
	printf("&a: %d \n", &a); //c�������ǣ������ڼĴ���������ȡ��ַ
	for (int i = 0; i<1000; i++) //��ʹ��registerҲ�������Ż�
	{
		printf("i:%d \n", i);
	}
	system("pause");

	return 0;
}