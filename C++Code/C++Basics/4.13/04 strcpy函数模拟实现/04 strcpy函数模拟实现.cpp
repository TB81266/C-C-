#include<stdio.h>
#include<assert.h>
char *myStrcpy(char* ch1, const char* ch2){
	//�ȶ�����������ַ����Ƿ�Ϊ�գ����д��������������ʵ�ִ���ı���
	assert(ch1 != NULL&&ch2 != NULL);
	char *temp = ch1;//������ʱ���� ����ԭ�еĵ�ַ
	while (*ch2 != '\0'){
		*temp++ = *ch2++;
	}
	*temp = '\0';
	return ch1;
}
int main(){
	char ch1[] = { "shangxiaofeng" };
	char ch2[] = { "shixuanyu" };
	char *result = myStrcpy(ch1,ch2);
	printf("%s\n", result);
	return 0;
}