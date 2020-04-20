#include<stdio.h>

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
void initArr(int * arr, int len){
	int i = 0;
	for (i = 0; i < len; i++){
		arr[i] = 0;
	}
}

//ʵ��print()  ��ӡ�����ÿ��Ԫ��
void printArr(int * arr, int len){
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//ʵ��reverse()  �����������Ԫ�ص����á�
void reverseArr(int * arr, int len){
	int mid = len / 2;
	int i = 0;
	for (i = 0; i < mid; i++){
		int temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}
int main(){
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(arr)/sizeof(arr[0]);
	initArr(arr,length);
	printArr(arr, length);
	reverseArr(arr, length);
	return 0;
}