/*
���������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�
*/
#include <stdio.h>
int check_sys(){
	int i = 1;
	return (*(char *)&i);
}
int main(){
	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}
	return 0;
}
//����2
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
