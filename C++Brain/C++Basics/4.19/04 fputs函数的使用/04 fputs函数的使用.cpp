#include<stdio.h>
/*
дһ���ַ������ļ���ȥ fputs
��ӡ���ļ��ĵ���Ļ
*/

int main(){
	FILE* file1;
	FILE* file2;
	char line[128];

	file1 = fopen("admin.c", "r");
	file2 = fopen("test.c", "w");

	if (file1 == NULL || file2 == NULL){
		printf("�ļ���ʧ�ܣ�\n");
		return 1;
	}

	while (fgets(line, sizeof(line), file1)){
		fputs(line, file2);
	}
	return 0;
}