#include<stdio.h>
#include<stdbool.h>
#include<string.h>

//����������ռ�ֽڵĳ���
int main01(){
	printf("%d\n", sizeof(bool));      //1
	printf("%d\n", sizeof(char));      //1
	printf("%d\n", sizeof(short));     //2
	printf("%d\n", sizeof(int));       //4
	printf("%d\n", sizeof(float));     //4
	printf("%d\n", sizeof(long));      //4
	printf("%d\n", sizeof(double));    //8
	printf("%d\n", sizeof(long long)); //8
return 0;
}


//���͵�������Ҫ���ڶ������
int main02(){
	char ch; //ch 1
	int a; //���ٿռ� //4
	double d; //8
	return 0;
}


void main03(){
	char ch1;//�з��ŵ��ַ�����
	signed char ch2;
	unsigned char ch3;//�޷��ŵ��ַ�����
}

void main04 (){
	int a = -10;
	printf("a = %d\n", a);
}

void main05(){
	//�з��ŵ��ַ�����
	char ch1 = 150;
	//�޷��ŵ��ַ�����
	unsigned char ch3 = 150;
}


void main06(){
	//0 ~ 255
	for (unsigned char i = 0; i < 256; ++i) {
		printf("Hello C.\n");
	}//���������ѭ����i �����255  ��ԶС��256������Զ���� 
}


void main07(){
	char ch = -128-1;  //-128 ~ 127
	printf("ch = %d\n", ch);
}

void main08(){
	float f = 12.125;
}


unsigned char i = 0;
int main09(){
	for (i = 0; i <= 255; i++){
	printf("hello world\n");
	}//i ����-128~127 �������� ������ѭ��
	return 0;
}


int main10(){
	char a[1000];  //�ַ���
	int i;
	for (i = 0; i < 1000; i++){
	a[i] = -1 - i;
	}
	printf("%d", strlen(a));  
	return 0;
}



void main11(){
	char *pc = "He\0llo C"; //�ַ���
	printf("len = %d\n", strlen(pc));
}


int main12(){
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++){
	a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
	return 0;
}


void main13(){
	unsigned int i;
	for (i = 9; i >= 0; i--){
	printf("%u\n", i);  //9 8 7 6 5 4 3 2 1
	}
}


void main14(){
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);  //
}


int main15(){
	char a = 128;  //-128 ~ 127  -128
	printf("%u\n", a);
	return 0;
}


int main16(){
	char a = -128;
	printf("%u\n", a);
	//1000 0000 0000 0000 0000 0000 1000 0000  ԭ��
	//1111 1111 1111 1111 1111 1111 0111 1111  ���� + 1
	//1111 1111 1111 1111 1111 1111 1000 0000  ����
	return 0;
}


int main17(){
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;  //1111 1111
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	//-1   -1
	return 0;
}

bool CheckModel(){
	int i = 1;  //int i = 00 00 00 01;
	return  (*(char*)&i) == 1;   //
}

void main18(){
	bool flag = CheckModel();
	if(flag)
	printf("This is Litter.\n");
	else
	printf("This is Big.\n");
}


void main19(){
	int a = 123456789;
}


void main20(){
	int a = -1;
	printf("a = %d\n", a);
	printf("a = %u\n", a);
}


void main21(){
	char ch;
	int i;
	//������
	//void v;  //sizeof(void)
	//int *p = NULL;
	void *pv;  //4
}

void main(){
unsigned char ch = 255+1;  //0 ~ 255
printf("ch = %d\n", ch);
}


