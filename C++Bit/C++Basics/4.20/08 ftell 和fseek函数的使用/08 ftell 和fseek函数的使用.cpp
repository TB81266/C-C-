#include<stdio.h>

int main01(){
	char c;
	FILE* file = fopen("test.txt", "r");
	if (!file){
		printf("���ļ�ʧ�ܣ�\n");
		return 1;
	}
	int pos = ftell(file);//��ȡ�ļ���λ��
	printf("pos= %d\n", pos);
	c = fgetc(file);
	printf("c= %c\n", c);
	c = fgetc(file);
	printf("c= %c\n", c);
	pos = ftell(file);
	printf("pos= %d\n", pos);
	rewind(file);//ָ���ļ���ʼ��λ��
	pos = ftell(file);
	printf("pos= %d\n", pos);
	fclose(file);
	return 0;
}

int main(){
	FILE *file;
	long size;
	char c;
	file = fopen("test.txt", "r");
	if (!file){
		printf("���ļ�ʧ�ܣ�\n");
		return 1;
	}

	fseek(file, 0, SEEK_END);
	size = ftell(file);
	printf("size of myfile .txt:%ld bytes\n", size);

	int pos = ftell(file);
	printf("pos= %d\n", pos);
	c = fgetc(file);
	c = fgetc(file);
	printf("c= %c \n", c);
	pos = ftell(file);
	printf("pos= %d\n", pos);
	fseek(file,3, SEEK_CUR);
	printf("size of myfile.txt:%ld bytes\n", size);
	fclose(file);
	return 0;
}