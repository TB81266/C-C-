#include<stdio.h>

int main(){
	int a;
	printf("���������ĳɼ���");
	scanf_s("%d", &a);
	if (a < 60){
		printf("û�м���\n");
	}
	else if( a < 80){
		printf("���ĳɼ���һ�㣡\n");
	}
	else if (a < 90){
		printf("���ĳɼ�������\n");
	}
	else {
		printf("���ĳɼ������㣡\n");
	}

	return 0;
}