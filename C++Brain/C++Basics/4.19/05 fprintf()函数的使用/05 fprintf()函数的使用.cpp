#include <stdio.h>

int main(void) {
	FILE *file1;
	char name[32];
	int age;
	char c;

	file1 = fopen("info.txt", "w");
	if (!file1){
		printf("���ļ�ʧ�ܣ�");
		return 1;
	}
	while (1) {
		printf("������ѧԱ������");
		scanf("%s", name);
		printf("������%s�ĳɼ�: ", name);
		scanf("%d", &age);

		fprintf(file1, "����:%s\t\t����:%d\n", name, age);

		printf("����Ҫ���������� Y/N\n");

		//fflush(stdin);
		while ((c = getchar()) != '\n');  //ֱ�������س���Ϊֹ�� 

		scanf("%c", &c);
		if (c == 'Y' || c == 'y') {
			continue;
		}
		else {
			break;
		}
	}

	fclose(file1);
	return 0;
}
