#include"class.h"

int main(){
	Goods Ball01("Basketball",120, 2);
	//�������캯�������ֵ���ʱ������һ�������ʼ����һ������
	//��һ�ֵ��õķ��� Goods  Ball02 = Ball01
	//�ڶ��ֵ��õķ��� Goods  Ball02(Ball01)
	//�����ֵ��õķ��� �����������Ĳ���  ʵ�γ�ʼ���β� 
	//�����ֵ��õķ��� ����λ�ں������� ���������  �����ÿ������캯�� ������������
	Goods Ball02(Ball01); //���� 1 2 
	objPlay(Ball01);//����3
	wayFour();//����4 

	Goods Ball03("Basketball", 120, 2);
	Ball03 = Ball01;//��Ball01 ��ֵ��Ball03 �ȼ���Ball03.operator=(Ball01)  ���  
	Ball03.GoodsShow();

	return 0;
}