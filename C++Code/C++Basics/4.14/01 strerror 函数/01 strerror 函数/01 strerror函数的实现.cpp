#include <stdio.h>
#include <string.h>
#include <errno.h>//���������ͷ�ļ�

int main(){
	FILE * pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL){
		printf("Error opening file unexist.ent: %s\n", strerror(errno));
	}
	//errno: Last error number
	return 0;
}
