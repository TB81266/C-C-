/*��ӡ���������Ƶ�����λ��ż��λ
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
*/
#include<stdio.h>
void printNum(int num){
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main(){
	int m;
	printf("������һ��������");
	scanf_s("%d", &m);
	printNum(m);
}