#include"game.h"

void game(){
	//��Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//0��ʾû���� 
	//����Ų������Ϣ
	char show[ROWS][COLS] = { 0 };//* ��ʾ û���Ų��λ��
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisPlayBoard(mine,ROW,COL);
	//DisPlayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisPlayBoard(mine, ROW, COL);
	DisPlayBoard(show, ROW, COL);	
	//�Ų���
	FindMine(mine,show, ROW, COL);
}
void menu(){
	printf("     (*�����)     \n");
	printf(" *** 1.play ***   \n");
	printf("  ** 0.exit **    \n");
	printf("     (*�����)    \n");

}
void test(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����");
		}
	} while (input);
}

int main(){
	test();
	return 0;
}