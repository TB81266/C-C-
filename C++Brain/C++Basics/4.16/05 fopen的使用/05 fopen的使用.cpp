#include<stdio.h>
//FILE *fopen( const char *fname, const char *mode );//fname ��ʾ�ļ��������Ժ���·����Ϣ�����ڶ��������Ǵ򿪵ķ�ʽ
int main(){
	FILE* file;
	file =  fopen("C:\\DuringWinterVacation\\BrainCollege\\BrainCode\\4.16\\05 fopen��ʹ��\\xiaofeng.txt","r");
	if (!file){//�ȼ��� file == NULL
		printf("��xiaofeng.txt�ļ�ʧ�ܣ�\n");
	}
	else{
		printf("��xiaofeng.txt�ļ��ɹ���\n");
	}
	printf("=====================\n");

	FILE* file01;
	file01 = fopen("C:\\DuringWinterVacation\\BrainCollege\\BrainCode\\4.16\\05 fopen��ʹ��\\xiaofeng.txt", "rb+");
	if (!file01){
		printf("��xiaofeng.txt�ļ�ʧ�ܣ�\n");
	}
	else{
		printf("��xiaofeng.txt�ļ��ɹ���\n");
	}
	return 0;
}