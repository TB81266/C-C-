
#include <stdio.h>
int different(int m, int n){
	int tmp = m^n;
	int count = 0;
	while (tmp){
		
		tmp = tmp&(tmp - 1);//��һ���裬Ϊʲô��ô��������⣬��æ���һ�¡�
		count++;
	}
	return count;
}

int main(){
	int m, n;
	printf("������������m n��");
	scanf_s("%d %d", &m, &n);
	printf("%d\n", different(m, n));
	return 0;
}
