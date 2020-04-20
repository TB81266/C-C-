#include<stdio.h>

int main(void){
	int c;
	FILE* fp = fopen("Test.txt", "w");
	if (!fp){
		perror("File opening failed");
		return  -1;
	}
	// ��׼C I/O��ȡ�ļ�ѭ��
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	putchar('\n');
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
	return 0;
}