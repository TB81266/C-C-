/*
��ӡˮ�ɻ���
���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
*/

#include <stdio.h>
#include <math.h>
int main(){
	int i = 0;
	for (i = 0; i < 100000; i++){
		int sum = 0;
		int n = 1;
		//1���ж��Ǽ�λ��
		int temp = i;
		while (temp /= 10){
			n++;
		}
		//2���õ�����i��ÿһλ������ÿһλ�Ĵη���
		temp = i;
		while (temp){
			double tp = temp % 10;
			sum += pow(tp, n);
			temp /= 10;
		}
		//3. �ж�
		if (sum == i){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}