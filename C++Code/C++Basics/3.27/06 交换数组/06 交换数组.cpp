#include<stdio.h>

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
void swap(char *x, char *y, int len){
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++){
		while(i == j){
			int temp = x[i];
			x[i] = y[j];
			y[j] = temp;
			j++;
		}
	}
}
void printF(char * x,int len){
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%c", x[i]);
	}
	printf("\n");
}

int main(){
	char a1[] = { "bit science and technology,powerful!" };
	char a2[] = { "peng ge very very very niu,stronger!" };
	int length = sizeof(a1) / sizeof(a1[0]);
	swap(a1, a2, length);
	printF(a1, length); 
	printF(a2, length);
	return 0;
}