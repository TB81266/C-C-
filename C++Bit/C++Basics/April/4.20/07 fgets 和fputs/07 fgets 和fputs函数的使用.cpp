
#include<stdio.h>

int main(){
	FILE *file = fopen("test.txt", "r");
	if (!file){
		printf("��ʧ�ܣ�\n");
		return 1;
	}
	FILE* fp = fopen("test02.txt", "w");
	if (!fp){
		fclose(file);//���ļ�ʧ�ܣ���file�ļ��ر� ��������˷�
		printf("��ʧ�ܣ�\n");
		return 1;
	}
	char ch[128] = { 0 };
	char *res = fgets(ch,128,file);//��Ӳ���ļ����� д���ڴ�����
	while (res != NULL){
		fputs(ch, fp);//���ڴ�����д����fp��Ӳ���ļ���ȥ
		res = fgets(ch, 128, file);
	}
	fclose(file);
	fclose(fp);
	return 0;
}