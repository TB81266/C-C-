#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int b = a--;
	int c = --a;
	printf("%d %d \n", b, c);

	int d = a++;
	int e = ++a;
	printf("%d %d \n", d,e);

	int bb = (int)3.14;//ǿ������ת�� ��3.14 ת����int����

	return 0;
}