/*
ʵ��һ�����������������ַ����е�k���ַ������磺
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
*/

#include<stdio.h>
#include<string.h>

void leftRound(char * ch, int time){
	int i, j;
	char temp;
	int len = strlen(ch);
	time %= len;
	for (i = 0; i < time; ++i){
		temp = ch[0];
		for (j = 0; j < len - 1; ++j){
			ch[j] = ch[j + 1];
		}
		ch[j] = temp;
	}
}


void leftRound02(char * src, int time){
	int len = strlen(src);
	int pos = time % len; //�Ͽ�λ�õ��±�
	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
	strcpy(src, tmp); //��󿽻�ȥ
}
int main(){
	char ch[32] = {"xiaofeng"};
	int k = 2;
	/*printf("��������Ҫ��ת���ַ�����k���ַ���");
	scanf_s("%s", ch);
	scanf_s("%d", &k);*/
	//leftRound(ch,k);
	leftRound02(ch, k);
	printf("%s\n", ch);
	return 0;
}