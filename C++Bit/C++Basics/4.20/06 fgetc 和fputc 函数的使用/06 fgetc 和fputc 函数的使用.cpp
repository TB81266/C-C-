#include<stdio.h>

int main(){
	FILE *file = fopen("test.txt", "r");
	if (!file){
		printf("��ʧ�ܣ�\n");
		return 1;
	}
	FILE* fp = fopen("test1.txt", "w");
	if (!fp){
		fclose(file);//���ļ�ʧ�ܣ���file�ļ��ر� ��������˷�
		printf("��ʧ�ܣ�\n");
		return 1;
	}
	char ch = fgetc(file);//��Ӳ���ļ����� д���ڴ�����
	while (ch != EOF){
		fputc(ch, fp);//���ڴ�����д����fp��Ӳ���ļ���ȥ
		ch = fgetc(file);
	}


	fclose(file);
	fclose(fp);
	return 0;
}