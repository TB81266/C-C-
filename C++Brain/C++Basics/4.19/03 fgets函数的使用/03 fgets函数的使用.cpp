
#include<stdio.h>
#include<assert.h>
int main(){
	FILE * file = fopen("test.txt", "r");
	assert(file != NULL);
	char buf[128];
	char * p;
	//while (1){
	//	p = fgets(buf, sizeof(buf), file);//����ȡ����2 - 1�� stdin��������
	//	if (!p){
	//		break;
	//	}
	//	printf("%s ", buf);
	//}
	while (fgets(buf, sizeof(buf), file)){
		printf("%s ", buf);
	}
	printf("\n");
	fclose(file);
	return 0;
}