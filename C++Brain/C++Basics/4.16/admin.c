#include<stdio.h>
/*
���裺�û�������a��
���룺123456
*/
int main(){
	char name[32];
	char password[16];
	
	printf("�������û��˺�:");
	//fgets// ��һ����������ַ���ڶ����Ǵ�С���������Ǵ��������룬��Ŀ�Ǽ�������
	fgets(name,sizeof(name),stdin);//scanf("%s",name)������������һ����ַ������Ҫ��&
	printf("���������룺");
	fgets(password,,sizeof(password),stdin);//gets������ȡһ�� ���ܻ�Խ�磬���Ǻܰ�ȫ
	//�����ǲ�����Ϣ
	printf("�˺���:%s \n",name);
	printf(" ������:%s\n,password");
	//�ж��˺ź������Ƿ���ȷ������
	
	printf("---��������̨����---\n");
	printf("1����¼\n");
	printf("2�������˺�\n");
	printf("3��ɾ���˺�\n");
	printf("4���˳�\n");
	
	return 0;
}