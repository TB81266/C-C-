#include<stdio.h>
int main(){
	int arr[] = { 10, 45, 67, 54, 6, 78, 9, 9, 56, 57, 89, 100 };
	int n = sizeof(arr) / sizeof(arr[0]);
	FILE* file = NULL;
	file = fopen("test.txt", "wb");//"w"   wb  wb+ ������ʲô����
	if (!file){
		printf("���ļ�ʧ�ܣ�");
		return 1;
	}
	int i = 0;
	for (i = 0; i < n; ++i){
		printf("%d ", arr[i]);//��׼�������Ļ
	}
	printf("\n");


	for (i = 0; i < n; ++i){
		//��ʽ��������ļ���д���ļ� �ض���
		fprintf(file, "����Ϊ��%d ", arr[i]);
	}
	fclose(file);
	return 0;
}