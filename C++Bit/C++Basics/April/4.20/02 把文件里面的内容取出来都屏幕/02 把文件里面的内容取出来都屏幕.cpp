#include<stdio.h>

int main(){
	int arr[20] = { 0 };
	FILE *file = NULL;
	char name[32];
	file = fopen("test.txt", "r");
	if (!file){
		printf("���ļ�ʧ�ܣ�\n");
		return 1;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
		fscanf_s(file, "������%s   %d",name, arr[i]);
	}
	fclose(file);
	return 0;
}