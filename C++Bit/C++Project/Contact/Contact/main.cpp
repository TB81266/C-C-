#include"Contact.h"

void Menu(){
	printf("***********ͨѶ¼***************\n");
	printf("** 0���˳�            1������ **\n");
	printf("** 2��ɾ��            3������ **\n");
	printf("** 4���޸�            5����ʾ **\n");
	printf("** 6�����            7������ **\n");
}

int main(){

	int input = 1;
	Contact con;
	InitContact(&con);
	system("cls");
	system("title ͨѶ¼");
	system("mode con cols=50 lines=25");
	system("color 0B");
	system("date /T");
	system("TIME /T");
	while (input){
		Menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		if (input == EXIT)
			break;
		switch (input){
		case EXIT:
			printf("�˳�����\n");
			break;
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case FIND:
			FindContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case CLEAR:
			ClearContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		default:
			printf("������������������\n");
			break;
		}
	}
	return 0;
}