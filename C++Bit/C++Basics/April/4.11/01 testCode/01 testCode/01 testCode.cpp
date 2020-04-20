#include<stdio.h>
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4
#define MOD 5
#define QUIT 0

int Add(int a, int b){ return a + b; }
int Sub(int a, int b){ return a - b; }
int Mul(int a, int b){ return a * b; }
int Div(int a, int b){ return a / b; }
int Mod(int a, int b){ return a % b; }
int Max(int a, int b){ return a>b ? a : b; }

//ת�Ʊ�
int(*fun_table[])(int, int) = { 0, Add, Sub, Mul, Div, Mod, Max };

int main(int argc, char *argv[])
{
	//////////////////////////////////////////////////
	system("title ���׼�����");
	system("mode con cols=36 lines=10");
	system("color 0F");
	//////////////////////////////////////////////////

	int select = 1;
	while (select)
	{
		printf("************���׼�����**************\n");
		printf("* [1] �ӷ�               [2] ����  *\n");
		printf("* [3] �˷�               [4] ����  *\n");
		printf("* [5] ģ����             [0] �˳�  *\n");
		printf("************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);

		if (select == QUIT)
			break;

		printf("input a and b:>");
		int a, b;
		scanf("%d %d", &a, &b);

		int result = fun_table[select](a, b); //

		//char oper[] = {'+','-','*','/', '%'};
		if (select == ADD)
			printf("%d + %d=%d\n", a, b, result);
		else if (select == SUB)
			printf("%d - %d=%d\n", a, b, result);
		else if (select == MUL)
			printf("%d * %d=%d\n", a, b, result);
		else if (select == DIV)
			printf("%d / %d=%d\n", a, b, result);
		else if (select == MOD)
			printf("%d \%% %d=%d\n", a, b, result);
		system("pause");
		system("cls");
	}
	return 0;
}

/*
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4
#define MOD 5
#define QUIT 0
int Add(int a, int b){return a + b;}
int Sub(int a, int b){return a - b;}
int Mul(int a, int b){return a * b;}
int Div(int a, int b){return a / b;}
int Mod(int a, int b){return a % b;}
int main(int argc, char *argv[]){
//////////////////////////////////////////////////
system("title ���׼�����");
system("mode con cols=36 lines=10");
system("color 0F");
//////////////////////////////////////////////////
int select = 1;
while(select)
{
printf("************���׼�����**************\n");
printf("* [1] �ӷ�               [2] ����  *\n");
printf("* [3] �˷�               [4] ����  *\n");
printf("* [5] ģ����             [0] �˳�  *\n");
printf("************************************\n");
printf("��ѡ��:>");
scanf("%d", &select);
if(select == QUIT)
break;
printf("input a and b:>");
int a, b;
scanf("%d %d", &a, &b);
int result = 0;
switch(select)
{
case ADD:
result = Add(a, b);
break;
case SUB:
result = Sub(a, b);
break;
case MUL:
result = Mul(a, b);
break;
case DIV:
result = Div(a, b);
break;
case MOD:
result = Mod(a, b);
break;
default:
printf("Command Error, Please Input Again....\n");
system("pause");
system("cls");
continue;
}
//char oper[] = {'+','-','*','/', '%'};
if(select == ADD)
printf("%d + %d=%d\n",a,b,result);
else if(select == SUB)
printf("%d - %d=%d\n",a,b,result);
else if(select == MUL)
printf("%d * %d=%d\n",a,b,result);
else if(select == DIV)
printf("%d / %d=%d\n",a,b,result);
else if(select == MOD)
printf("%d \%% %d=%d\n",a,b,result);
system("pause");
system("cls");
}
return 0;
}
