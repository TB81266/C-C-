#include<stdio.h>

int main(){
	FILE* file;
	file = fopen("info.txt", "r");
	if (!file){
		printf("��ʧ�ܣ�\n");
		return 1;
	}
	char name[32];
	int age;
	int ret;
	//scanf("������%s,���䣺%d", name, &age);
	while (1){
		ret = fscanf(file, "������%s ���䣺%d\n", name, &age);
		if (ret == EOF){
			break;
		}
		printf("%s,%d\n", name, age);
	}
	fclose(file);
	return 0;
}